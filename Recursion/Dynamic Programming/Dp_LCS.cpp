#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

int LCS[1024][1024] = {0};
// memset(LCS, 0, sizeof(LCS));
// https://www.youtube.com/watch?v=sSno9rV8Rhg
//narshimha kurumachi
int lcs(string x, int m, string y, int n)
{
    for (int i = m - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            LCS[i][j] = LCS[i + 1][j + 1];
            if (x[i] == y[j])
                LCS[i][j]++;
            else
                LCS[i][j] = max(LCS[i + 1][j], LCS[i][j + 1]);
        }
    }
    return LCS[0][0];
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << LCS[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // int LCS[n+1][m+1]={0};
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= m; j++)
    //     {
    //         if(x[i]==y[j]) LCS[i][j] = 1+LCS[i-1][j-1];
    //         else LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
    //     }
    // }
    // return LCS[n][m];
}
int main()
{
    fast;
    string x = "abcceed";
    string y = "beece";
    cout << lcs(x, x.length(), y, y.length());
    return 0;
}