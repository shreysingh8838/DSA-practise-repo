#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;
        int maxcount = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            //count number of consecutive ones and store in count variable

            if (nums[i] == 1)
            {
                count++;
                // to store the previously maximum count
                maxcount = max(maxcount, count);
            }
            //if a zero if encountered then store previous
            else
            {
                count = 0;
            }
        }
        return maxcount;
    }
};
int main()
{
    fast;

    return 0;
}