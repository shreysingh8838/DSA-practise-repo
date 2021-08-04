#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

//this could be done as two pointer approach
//Could also be done using hashing but its time complexity is (n^2)log(n) AND space complexity o(N)
//but best approach is of two pointer its time complexity is (n^2)
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++)
        {
            set<int> s;
            for (int j = i + 1; j < n; j++)
            {
                int x = -(nums[i] + nums[j]);
                vector<int> pro;
                // to not accept the duplicates
                if (i != 0 && nums[i] == nums[i - 1])
                    continue;
                if (s.find(x) != s.end())
                {
                    res.push_back({nums[i], nums[j], x});

                    // to not accept the duplicates
                    while (nums[j + 1] == nums[j] && j + 1 < nums.size())
                        ++j;
                }
                else
                {
                    s.insert(nums[j]);
                }
            }
        }
        return res;
    }
};
int main()
{
    fast;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    return 0;
}