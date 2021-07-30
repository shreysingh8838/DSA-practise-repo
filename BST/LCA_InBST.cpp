#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        
        // when both of them are greater than root node than it must be to the right side of the current node
        if(root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right, p, q); 
        
        //  when both of them are greater than root node than it must be to the right side of the current node
        else if(root->val > p->val && root->val > q->val) return lowestCommonAncestor(root->left, p, q);    
        
        // when there is the change in path one is greater than current node and other is smaller , than thats the least                common ancestor
        else{ 
            return root;
        }
    }
};

int main()
{
    fast;

    return 0;
}