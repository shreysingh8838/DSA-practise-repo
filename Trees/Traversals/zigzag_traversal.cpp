#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(root == NULL) return res;
        bool flag = true;   // if true then it means Left to Right
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> row(size);
            for(int i = 0; i<size; i++){
                TreeNode* temp = q.front();
                q.pop();
                int index = (flag) ? i : size-1-i;
                row[index] = temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            flag = !flag;
            res.push_back(row);
        }
        return res;
    }
};
int main()
{
    fast;
    return 0;
}