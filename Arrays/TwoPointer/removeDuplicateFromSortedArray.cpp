#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// Simple solution using set Data structure tc-O(nlogn)+O(n) and sc-O(n)
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         set<int>s;
//         for(int i=0; i<nums.size();i++){
//             s.insert(nums[i]);
//         }
//         int i =0;
//         for(auto x : s){
//             nums[i] = x;
//             i++;
//         }
//         return s.size();
//     }
// };

// Most optimal approach - TWO pointer
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.size() == 0)
            return 0;
        int i = 0;
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};
int main()
{
    fast;

    return 0;
}