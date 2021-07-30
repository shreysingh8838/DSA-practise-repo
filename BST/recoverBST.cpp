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
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// ALGO
// Find the inorder of the tree
// Now find the violation when a[i] is greater than a[i+1]
// then swap the a[i]->val and a[i+1]->val

// for this question we have used the vector of nodes only and swap its data directly
class Solution
{
    void dfs(TreeNode *root, vector<TreeNode *> &arr)
    {
        if (root == NULL)
            return;
        dfs(root->left, arr);
        arr.push_back(root);
        dfs(root->right, arr);
    }

public:
    void recoverTree(TreeNode *root)
    {
        vector<TreeNode *> arr;
        dfs(root, arr);
        TreeNode *first = NULL;
        TreeNode *second = NULL;
        for (int i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i]->val > arr[i + 1]->val)
            {
                // when violation is found
                if (first == NULL)
                    first = arr[i];
                second = arr[i + 1];
            }
        }
        swap(first->val, second->val);
    }
};
int main()
{
    fast;

    return 0;
}