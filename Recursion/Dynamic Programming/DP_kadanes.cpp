#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        vector<int> maxi(nums.size());
        maxi[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            maxi[i] = max(nums[i], nums[i] + maxi[i - 1]);
        }
        // for(auto it : maxi){
        //     cout << it << " ";
        // }
        return *max_element(maxi.begin(), maxi.end());
    }
};

// nums array =>        -2, 1, -3, 4, -1, 2, 1, -5, 4
// process =>           -2,  1/-1 = 1,  -3/-2 = -2,  4/2 = 4, -1/3 = 3, 2/5 = 5, 1/6 = 6, -5/1 = 1, 4/5 = 5
// final dp array =>    -2, 1, -2, 4, 3, 5, 6, 1, 5
int main()
{
    fast;

    return 0;
}