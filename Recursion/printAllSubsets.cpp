#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// leetcode
//  made by me and was inspired by subsetSum.cpp problem
class Solution
{
    void func(int index, vector<int> curr, vector<int> &nums, int n, vector<vector<int>> &ans)
    {
        // base conditon
        if (index == n)
        {
            ans.push_back(curr);
            return;
        }
        // without the current number
        func(index + 1, curr, nums, n, ans);

        // with the current number
        curr.push_back(nums[index]);
        func(index + 1, curr, nums, n, ans);
        curr.pop_back();
    }

public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int> curr;
        func(0, curr, nums, n, ans);
        return ans;
    }
};

int main()
{
    fast;

    return 0;
}