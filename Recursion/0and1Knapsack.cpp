
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// problem
int knapsack(int wt[], int profit[], int W, int n)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    // we have 3 cases as we have created our conditional tree according to this video
    // https://www.youtube.com/watch?v=mGfK-j9gAQA&list=PLEJXowNB4kPxBwaXtRO1qFLpCzF75DYrS&index=4
    // if the bag capacity is full then we have no choice we have to skip
    // secondly if bag is not full then it could be a chance that we accept that item or not so here are our 2 recursion calls
    if (wt[n] > W)
        return knapsack(wt, profit, W, n - 1); // n is getting n-1 as we are traversing right to left
    else
        return max(knapsack(wt, profit, W, n - 1), profit[n] + knapsack(wt, profit, W - wt[n], n - 1));
}
int main()
{
    fast;
    // int n = 3;
    // int W = 4;
    // int profit[n] = {1,2,3};
    // int wt[n] = {4,5,1};
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