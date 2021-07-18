#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// brute force approach
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans;
//         for(int i=0; i<nums.size();i++){
//             int rem = target-nums[i];
//             // linear search
//             for(int j=i+1; j<nums.size();j++){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//         return ans;
//     }
// };

// Using hashmaps
// ALGO
// create a hashmap
// store the nums[i] as key if it doesnt exist earlier in the hashmap with the value its index i
// and while traversing the array find the difference of the target and current element; exist in current hashmap or not
// if the difference exist then pushback the index of the current element along with the index which is found in the hashmap
// return the vector ans
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        unordered_map<int, int> mp;

        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (mp.find(target - nums[i]) != mp.end())
            {
                ans.push_back(mp[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};

int main()
{
    fast;
    Solution s;
    vector<int> nums = {3, 3, 5, 5, 2, 2};
    vector<int> twoSum = s.twoSum(nums, 7);
    for (auto it : twoSum)
    {
        cout << it << " ";
    }
    return 0;
}