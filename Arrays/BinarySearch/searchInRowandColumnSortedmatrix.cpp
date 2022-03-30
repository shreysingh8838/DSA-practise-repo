#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;
// https://www.youtube.com/watch?v=VS0BcOiKaGI&list=PL_z_8CaSLPWeYfhtuKHj-9MpYb6XQJ_f2&index=20
int matSearch(vector<vector<int>> &mat, int N, int M, int X)
{
    // your code here
    int i = 0, j = M - 1;
    while (i >= 0 && i < N && j >= 0 && j < M)
    {
        if (X == mat[i][j])
            return 1;
        else if (X < mat[i][j])
            j--;
        else
            i++;
    }
    return 0;
}
int main()
{
    fast;

    return 0;
}