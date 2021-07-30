#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// brute force - O(n^3)
// kadane's algo - O(n)

// to find the contigous maximum sum subarray
// we will start adding starting element to sum
// then also we will check if the sum is -ve or not ; if it becomes -ve then we will put it zero and start counting sum from the next upcoming value/indexes
// we also have a maxi variable to store any previous maximum sum
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        int maxi = INT_MIN;
        for (auto it : nums) // traversing the vector
        {
            sum = sum + it;        // adding every next element to sum
            maxi = max(sum, maxi); // storing the maximum value among the current sum or the previously stored sum
            if (sum < 0)           // if the sum value gets -ve then it will again set to zero and continue traversing further and storing to the sum
                sum = 0;
        }
        return maxi;
    }
};
int main()
{
    fast;

    return 0;
}