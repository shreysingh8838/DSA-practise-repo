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

void print_leftview(bool *levels,Node* root, int curr){
    if(root==NULL) return;
    if(levels[curr]== false){
        levels[curr] = true;
        cout << root->data << " ";
    }
    print_leftview(levels,root->left,curr+1);
    print_leftview(levels,root->right,curr+1);
}
void leftview(Node* root){
    bool levels[202];
    memset(levels, false, 202);
    print_leftview(levels,root,0);
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
    leftview(root);

    return 0;
}