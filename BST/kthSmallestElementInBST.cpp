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

// Inorder BST always returned as sorted
// then find the kth element in sorted array
// time complexity is O(n)

// but for time complexity of O(height_of_tree) : we can use inorder successor method also
class Solution
{
    void inorder(TreeNode *root, vector<int> &res)
    {
        if (root == NULL)
            return;
        inorder(root->left, res);
        res.push_back(root->val);
        inorder(root->right, res);
    }

public:
    int kthSmallest(TreeNode *root, int k)
    {
        vector<int> sorted_tree;
        inorder(root, sorted_tree);
        return sorted_tree[k - 1];
    }
};
int main()
{
    fast;

    return 0;
}