#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        // we will create the minimum value array along with maximum value array
        vector<int> maxi_dp(nums.size());
        vector<int> mini_dp(nums.size());
        // initialize both the array with the starting nums
        maxi_dp[0] = nums[0];
        mini_dp[0] = nums[0];

        // traverse the array from index 1 to the last
        for (int i = 1; i < nums.size(); i++)
        {
            // if the array value is -ve then the maximum array value could either be the nums[i] value the -ve or we will multiply the last minimum value to the -ve nums value
            // and for the case of minimum array we will multiply the -ve nums with maximum array value to get the minimum -ve value
            if (nums[i] < 0)
            {
                // here we are swapping the last minimum and maximum as when any -ve number wil be multiplied with maximum +ve number it will surely return maximum -ve number
                maxi_dp[i] = max(nums[i], nums[i] * mini_dp[i - 1]);
                mini_dp[i] = min(nums[i], nums[i] * maxi_dp[i - 1]);
            }
            // but if the nums[i] is +ve then either we choose the maximum dp to be the nums[i] or the multiply of nums[i] and previous maximum array value
            // similar for the minimum array value
            else
            {
                maxi_dp[i] = max(nums[i], nums[i] * maxi_dp[i - 1]);
                mini_dp[i] = min(nums[i], nums[i] * mini_dp[i - 1]);
            }
        }
        return *max_element(maxi_dp.begin(), maxi_dp.end());
    }
};

int main()
{
    fast;

    return 0;
}