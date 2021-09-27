#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

//  Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Just similar to height of BT as there we are going to find the maximum distance so we have used max(func(root->left),func(root->right))+1 ; also we add 1 to denote single node and which sums to the total number of nodes in the path
// similarily in this question we have to find the minimum path so we used min(func(root->left),func(root->right))+1
// but there is special condition mentioned in the second example as we have got a skew tree whose either of        side is zero and all the tree is only on one side
// then first
// we will find whether either of the side has minimum distance as zero
// then we will find the maximum distance and return it
class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        if (min(minDepth(root->left), minDepth(root->right)) == 0)
            return max(minDepth(root->left), minDepth(root->right)) + 1;
        return min(minDepth(root->left), minDepth(root->right)) + 1;
    }
};

int main()
{
    fast;

    return 0;
}