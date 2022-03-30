#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// Input: nums = [1,2,3]
// Output: [1,3,2]

// Input: nums = [3,2,1]
// Output: [1,2,3]

// Input: nums = [1,1,5]
// Output: [1,5,1]

/*
    BRUTE FORCE USING STL next_permutation() function - tc-O(n)
    class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            next_permutation(nums.begin(), nums.end());
            for(auto it : nums){
                cout << it ;
            }
        }
    };
*/

// algorithm for the optimal solution
// find the i where, a[i-1] < a[i], then i1 = i-1
// then from reverse find the any i2 which has, a[i2] > a[i1]
// then swap both a[i2] and a[i1]
// then reverse the array from (index i1 + 1 -> last index)

// INtiution behind this algo is given by striver

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int index1 = -1; // why we kept value as -1? -> if we are not able to assign any value to index1 than it will remain -1. So thats how we can check it get changed or not
        int index2 = -1;
        for (int i = nums.size() - 1; i > 0; i--)
        {
            if (nums[i] > nums[i - 1])
            {
                index1 = i - 1;
                break;
            }
        }

        // this if is specially for an edge case
        // if dont found any index1 where, a[i] < a[i+1]
        // then at that case we will just reverse the array and return
        if (index1 == -1)
            reverse(nums.begin(), nums.end());

        else
        {
            for (int i = nums.size() - 1; i > 0; i--)
            {
                if (nums[i] > nums[index1])
                {
                    index2 = i;
                    break;
                }
            }
            swap(nums[index1], nums[index2]);
            reverse(nums.begin() + index1 + 1, nums.end());
        }
    }
};
int main()
{
    fast;
    Solution s;
    vector<int> nums = {3, 2, 1};
    s.nextPermutation(nums);
    for (auto it : nums)
    {
        cout << it << " ";
    }
    return 0;
}