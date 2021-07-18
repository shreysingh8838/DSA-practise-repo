#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool CheckMirror(Node *root, Node *root2)
{
    if (root == NULL && root2 == NULL)
        return true;
    if (root == NULL || root2 == NULL)
        return false;
    if (root->data != root2->data)
        return false;
    return CheckMirror(root->left, root2->right) && CheckMirror(root->right, root2->left);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    Node *root2 = new Node(1);
    root->left = new Node(3);
    root->right = new Node(2);
    root->right->left = new Node(5);
    root->right->right = new Node(4);
    if (CheckMirror(root, root2))
        cout << "TREE 2 IS MIRROR OF TREE 1";
    else
        cout << "NO";

    return 0;
}