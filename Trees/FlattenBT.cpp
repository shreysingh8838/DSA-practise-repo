#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;
//DIFFICULT QUES : LINK : https://www.youtube.com/watch?v=WR6-DrAsNpc&list=PLIDSFP7x1kNTSwFOTmkBWBPWNXkMpiume&index=12&t=381s

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

void flatten(Node *root)
{
    if (root == NULL || root->left == NULL && root->right == NULL)
        return;
    if (root->left != NULL)
    {
        flatten(root->left);
        Node *temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node *tail = root->right;
        while (tail->right != NULL)
        {
            tail = tail->right;
        }

        tail->right = temp;
    }

    flatten(root->right);
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
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
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    flatten(root);
    cout << "INORDER -: \n";
    inorder(root);
    cout << "\n";
    cout << "LEVEL ORDER -: \n";
    levelorder(root);
    return 0;
}