#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;

//     //Constructor
//     Node(int val)
//     {
//         this->data = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };


// ALGO
// calcHeight(root->left) --> to go to the left most part of tree
// calcHeight(root->right) --> to go to the rightmost part of the tree
// then we will select the greater than of all
// and atlast we will add 1 to add the main root node
int calcHeight(Node *root)
{
    if (root == NULL)
        return 0;
    // calcHeight(root->left) --> to go to the left most part of tree
    // calcHeight(root->right) --> to go to the rightmost part of the tree
    // then we will select the greater than of all
    // and atlast we will add 1 to add the main root node
    return max(calcHeight(root->left), calcHeight(root->right)) + 1;
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
    cout << calcHeight(root) << endl;
    return 0;
}