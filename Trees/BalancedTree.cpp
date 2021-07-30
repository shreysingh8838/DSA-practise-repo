#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// function to find the height of root or from root
int height(Node *root)
{
    if (root == NULL)
        return 0;
    return max(height(root->left), height(root->right)) + 1;
}

//function to return whether the tree is balenced of height or not
// we can say a tree is balanced if all of its nodes are balanced
// so we will check for every node and at final we will check for main parent root
bool isBalencedTree(Node *root)
{
    //base case
    // check for the child node as it is balanced on its own so it will always return true
    if (root == NULL)
    {
        return true;
    }

    if (isBalencedTree(root->left) == false)
        return false;
    if (isBalencedTree(root->right) == false)
        return false;
    if (abs(height(root->left) - height(root->right)) <= 1)
        return true;
    else
        return false;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(8);
    root->left->left->left->left = new Node(9);
    if (isBalencedTree(root))
        cout << "Balenced";
    else
        cout << "Not Balenced";
    return 0;
}