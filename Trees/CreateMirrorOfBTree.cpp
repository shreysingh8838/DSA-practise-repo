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

void CreateMirror(Node *root)
{
    if (root == NULL)
        return;
    CreateMirror(root->left);
    CreateMirror(root->right);
    swap(root->left, root->right);
}

void levelorder(Node *root)
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
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    CreateMirror(root);
    levelorder(root);
    return 0;
}