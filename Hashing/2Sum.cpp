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
        vector<int>twoSum;
        unordered_map<int,int> m;
        
        for(int i=0; i <nums.size(); i++){
            if(m.find(nums[target-nums[i]]) != m.end()) {
                twoSum.push_back(m[target-nums[i]]);
                twoSum.push_back(i);
                return twoSum;
            }
            m[nums[i]] = i;
        }
        return twoSum;
    }
};

int main()
{
    fast;
    Solution s;
    vector<int> nums = {2,7,11,15};
    vector<int> twoSum = s.twoSum(nums, 9);
    for (auto it : twoSum)
    {
        cout << it << " ";
    }
    return 0;
}