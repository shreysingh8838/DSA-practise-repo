#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

int dp[1024][1024] = {-1};
int knapsack(int wt[], int profit[], int W, int n)
{
    for(int i=0; i<n; i++){
        for(int j =0; j < W; j++){
            if(i==0 || j==0) return dp[i][j] = 0;
            else if(wt[i-1]>j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], profit[i-1] + dp[i-1][W-wt[i-1]]);
        }
    }
    return dp[n][W];
}

int main()
{
    fast;
    int n;
    int W;
    cin >> n >> W;
    int profit[n];
    int wt[n];
    for (int i = 0; i < n; i++)
    {
        cin >> profit[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    cout << knapsack(wt, profit, W, n);
    return 0;
}