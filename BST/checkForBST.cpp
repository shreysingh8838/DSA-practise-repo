#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

//Earliner learned from Code Library but not cleared
// and didnt find the code more fun

// ALGO
// Create a flag (f) variable to give output and also a (prev) node pointer to store the previous node
// Idea - is to traverse the tree in a inorder format and if the data of the next root is smaller than the previous node data then it will not be BST and return
// Move to the extreme left first
// check this is false only for 1st loop as the root (is just befoe the extreme left)
// and in same condition check whether the prev node data is not smaller than current node data if its not then its not a BST
// and if the condition is true than mark the flag as zero and then return
// and if not then update the (prev) node as root
class Solution
{
    void func(Node *root, Node *&prev, int &f)
    {
        if (root == NULL)
            return;

        func(root->left, prev, f);
        if (prev != NULL && prev->data >= root->data)
        {
            f = 0;
            return;
        }
        prev = root;
        func(root->right, prev, f);
    }

public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node *root)
    {
        // Your code here
        Node *prev = NULL;

        int f = 1; // flag variable

        func(root, prev, f);
        return f;
    }
};
int main()
{
    fast;

    return 0;
}