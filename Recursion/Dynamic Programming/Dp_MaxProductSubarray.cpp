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
        vector<int> maxi_dp(nums.size());
        vector<int> mini_dp(nums.size());
        maxi_dp[0] = nums[0];
        mini_dp[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                // here we are swapping the last minimum and maximum as when any -ve number wil be multiplied with maximum +ve number it will surely return maximum -ve number
                maxi_dp[i] = max(nums[i], nums[i] * mini_dp[i - 1]);
                mini_dp[i] = min(nums[i], nums[i] * maxi_dp[i - 1]);
            }
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