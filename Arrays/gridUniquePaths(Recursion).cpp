#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

//using  recurssive solution but not acceptable as its time complexity will be exploaded to exponential
// class Solution {
//     int countPaths(int i, int j, int m, int n){
//         if(i==(m-1) && j==(n-1)) return 1;
//         else if(i>=m || j>=n) return 0;
//         return countPaths(i+1,j,m,n) + countPaths(i,j+1,m,n);
//     }
// public:
//     int uniquePaths(int m, int n) {
//         return countPaths(0,0,m,n);
//     }
// };

// using dp --tc-O(n*m) and sc-O(n*m)
// class Solution {
//     int countPaths(int i, int j, int m, int n,vector<vector<int>>&dp){
//         if(i==(m-1) && j==(n-1)) return 1;
//         else if(i>=m || j>=n) return 0;
//         if(dp[i][j]!=-1) return dp[i][j];
//         else return countPaths(i+1,j,m,n,dp) + countPaths(i,j+1,m,n,dp);
//     }
// public:
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(m, vector<int>(n, -1));
//         return countPaths(0,0,m,n,dp);
//     }
// };
int main()
{
    fast;
    // Solution s;
    // cout << s.uniquePaths(23,12);
    return 0;
}