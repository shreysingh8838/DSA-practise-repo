#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    //Constructor
    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// This is a BFS traversal or we can say Level order traversal=> Node Left Right
void print(struct Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        cout << node->data << " ";
        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
    }
}
int main()
{
    fast;
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    print(root);
    return 0;
}
/*
        1
       / \
      2   3
     /\   /\
    4  5 6  7

    inorder = L P R
    preorder = L R P
    postorder = R L P
    BFS = P L R 
*/
