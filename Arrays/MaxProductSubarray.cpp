#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// this solution can be done with Dp also but preffered by this solution because it has zero time complexity
// https://www.youtube.com/watch?v=z2oH3sHORS4
class Solution
{
public:
    void swap(int &max, int &min)
    {
        int temp = max;
        max = min;
        min = temp;
    }
    int maxProduct(vector<int> &nums)
    {
        int maxi = 1;
        int mini = 1;
        int result = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                maxi = nums[i] * maxi;
                mini = min(1, nums[i] * mini);
            }
            if (nums[i] == 0)
            {
                maxi = 1;
                mini = 1;
            }
            if (nums[i] < 0)
            {
                swap(maxi, mini);
                maxi = max(1, maxi * nums[i]);
                mini = mini * nums[i];
            }
            result = max(result, maxi);
        }
        return result;
    }
};

int main()
{
    fast;

    return 0;
}