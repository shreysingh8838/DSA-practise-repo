#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;
class Solution
{
    vector<int> del(vector<int> &v, int num)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (num == v[i])
            {
                v.erase(v.begin() + i);
            }
        }
        return v;
    }

public:
    int maxProfit(vector<int> &prices)
    {
        int maxProfit = 0;
        vector<int> v;
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] > prices[i - 1])
                v.push_back(prices[i] - prices[i - 1]);
        }
        for (int i = 0; i < 2; i++)
        {
            maxProfit += *max_element(v.begin(), v.end());
            del(v, *max_element(v.begin(), v.end()));
        }
        return maxProfit;
    }
};
int main()
{
    fast;

    return 0;
}