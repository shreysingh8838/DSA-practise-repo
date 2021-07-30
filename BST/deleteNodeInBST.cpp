#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// ALGO
// WE HAVE 3 CASES :
// case 1 :  NODE IS LEAF NODE : fIRST SEARCH THE NODE IN THE TREE AND THEN DELETE THE NODE DIRECTLY
// case 2 :  NODE IS WITH ONLY LEFT OR RIGHT : fIRST SEARCH THE NODE IN THE TREE AND THEN CONNECT THE PREVIOUS NODE TO THE NEXT OF ITS NODE AND DELETE THE NODE
// case 3 :  NODE IS WITH BOTH LEFT AND RIGHT EXIST : fIRST SEARCH THE NODE IN THE TREE AND THEN CHOOSE ANY OF ITS INORDER SUCCESSOR OR PREDECESSOR THEN SWAP IT UNTIL THERE THE ABOVE TWO SITUTATION NOT COMES (MEANS UNTIL EITHER OF ITS SIDE IS NOT EXIST)

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
class Solution
{
    static TreeNode *insucc(TreeNode *root)
    {
        TreeNode *p = root->right;
        while (p->left)
            p = p->left;
        return p;
    }

public:
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (!root)
            return NULL;
        if (root->val > key)
            root->left = deleteNode(root->left, key);
        else if (root->val < key)
            root->right = deleteNode(root->right, key);
        else
        { // when we have found the correct NODE which is to be deleted than we will use our cases
            if (!root->right)
            { // 2nd case
                TreeNode *temp = root->left;
                delete (root);
                return temp;
            }
            else if (!root->left)
            { // 2nd case
                TreeNode *temp = root->right;
                delete (root);
                return temp;
            }
            else
            {                                  // 3rd case
                TreeNode *temp = insucc(root); // finding the inorder successor using the above insucc function
                swap(root->val, temp->val);
                root->right = deleteNode(root->right, key); // because we are finding inorder successor here
            }
        }
        return root;
    }
};
int main()
{
    fast;

    return 0;
}