#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// https://www.youtube.com/watch?v=dT6dvdbpChA&list=PLEJXowNB4kPxBwaXtRO1qFLpCzF75DYrS&index=6

// giving wrong output
// some logical error in program
int knapsack(int wt[], int profit[], vector<vector<int>> dp,int W, int n)
{
    // if(n==0 || W==0) return 0;
    // if(dp[W][n]!=-1) return dp[W][n];
    // else{
    //     if (wt[n-1] > W)
    //         return dp[W][n] = knapsack(wt, profit, W, n - 1); 
    //     else
    //         return dp[W][n] = max(knapsack(wt, profit, W, n - 1), profit[n] + knapsack(wt, profit, W - wt[n], n - 1));
    // }
    if(n==0 || W==0) return 0;
    if(dp[W][n]!=-1) return dp[W][n];
    else{
        if(wt[n-1] > W) return dp[W][n] = knapsack(wt,profit, dp, W, n-1);
        else return dp[W][n] = max(knapsack(wt, profit, dp, W-wt[n], n-1) + profit[n] , knapsack(wt, profit, dp, W, n-1 ));
    }
}

int main()
{
    fast;
    int n;
    int W;
    cin >> n >> W;
    int profit[n];
    int wt[n];
    vector<vector<int>> dp (W, vector<int>(n,-1));
    for (int i = 0; i < n; i++)
    {
        cin >> profit[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    cout << knapsack(wt, profit, dp, W, n);
    return 0;
}