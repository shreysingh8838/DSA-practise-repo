#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.

// ALgo -> tc-O(n)
// find the minimum number from start
// and then find all the profits from the only next greater index values

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minimum_price = INT_MAX;
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            minimum_price = min(minimum_price, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minimum_price);
        }
        return maxProfit;
    }
};
int main()
{
    fast;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    Solution s;
    cout << s.maxProfit(prices);
    return 0;
}