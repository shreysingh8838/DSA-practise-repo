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

vector<int> preorder_iterative(Node* root){
    vector<int> preorder;
    if(root==NULL) return preorder;
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        preorder.push_back(root->data);
        if(!root->right) st.push(root->right);
        if(!root->left) st.push(root->left);
    }
    return preorder;
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

    vector<int> preorder = preorder_iterative(root);
    for(auto it : preorder) cout << it << " ";

    return 0;
}