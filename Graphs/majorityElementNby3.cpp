#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

//USING BOYLE'S MOORE VOTING ALGO
// check previous solution for majority element greater than n/2
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int nums1 = -1;
        int nums2 = -1;
        int count1 = 0;
        int count2 = 0;
        for (auto it : nums)
        {
            if (it == nums1)
                count1++;
            else if (it == nums2)
                count2++;
            else if (count1 == 0)
            {
                nums1 = it;
                count1 = 1;
            }
            else if (count2 == 0)
            {
                nums2 = it;
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }

        vector<int> major;
        count1 = 0;
        count2 = 0;
        for (auto it : nums)
        {
            if (it == nums1)
                count1++;
            else if (it == nums2)
                count2++;
        }
        if (count1 > nums.size() / 3)
            major.push_back(nums1);
        if (count2 > nums.size() / 3)
            major.push_back(nums2);
        return major;
    }
};
int main()
{
    fast;

    return 0;
}