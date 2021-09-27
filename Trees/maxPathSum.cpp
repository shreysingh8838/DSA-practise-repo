#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
    int maxSum(TreeNode* root, int &maxi){
        if(root == NULL) return 0;
        // traversing the tree by first getting bottom of the tree and then backtrack
        // and checking if the sum of the leftside of node is negative then mark 0 else go to the futher inside of the tree
        int leftsum = max(0,maxSum(root->left, maxi));
        int rightsum = max(0, maxSum(root->right, maxi));
        
        // for every node we have a sum like its own value and then the value of its left and right child node
        int sum = root->val + leftsum + rightsum;
        
        // and finally get the maximum among the sum of and maximum sum for every traversal
        maxi = max(maxi, sum);
        
        // and this what we return when we backtrack
        return root->val + max(leftsum , rightsum);
    }
public:
    int maxPathSum(TreeNode* root) {
        // create a resultant variable
        int maxi = INT_MIN;
        // pass our resultant variable as pass by refrenence
        int maxs = maxSum(root, maxi);
        return maxi;
    }
};

int main(){

}