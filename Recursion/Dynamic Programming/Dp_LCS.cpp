#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

int LCS[1024][1024] = {0};
// memset(LCS, 0, sizeof(LCS));

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
            if (LCS[i][j + 1] > LCS[i][j])
                LCS[i][j] = LCS[i][j + 1];
            if (LCS[i + 1][j] > LCS[i][j])
                LCS[i][j] = LCS[i + 1][j];
        }
    }
    return LCS[0][0];
}
int main()
{
    fast;
    string x = "abcdee";
    string y = "acee";
    cout << lcs(x, x.length(), y, y.length());
    return 0;
}