#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// ALGO
// Actually this is based on a formula or trick but there is the limitation that this trick is not valid for leaf nodes. 
//     But for non-leaf nodes 
//         if we have to find the InorderSuccessor we should check if its root->left exist or not ; then we should move to the its left once then move to the extreme right.
//         if we have to find the InorderPredecessor we should check if its root->right exist or not ; then we should move to the its left once then move to the extreme left.
//         and return the node value when its child are got NULL.
//     But for leaf nodes- while traversing any node we just store the smaller node to the predecessor pointer and the greater node to the successor pointer which we continously update as we are traversing till we find the key node value

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* InorderSuccessor(TreeNode* root){
    TreeNode* p = root->right;
    while(p->left) p = p->left;
    return p;
} 

TreeNode* InorderPredecessor(TreeNode* root){
    TreeNode* p = root->left;
    while(p->right) p = p->right;
    return p;
}

int main()
{
    fast;

    return 0;
}