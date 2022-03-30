#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

int solve(int a[], int i, int j){
    if(i>=j) return 0;
    int mini =INT_MAX;
    for(int k=i; k<=j-1; k++){
        int temp = solve(a,i,k) + solve(a,k+1,j) + a[i-1]*a[k]*a[j];
        mini = min(mini, temp);
    }
    return mini;
}

int MatrixChainOrder(int p[], int i, int j)
{
    if (i == j)
        return 0;
    int k;
    int min = INT_MAX;
    int count;
 
    // place parenthesis at different places between first
    // and last matrix, recursively calculate count of
    // multiplications for each parenthesis placement and
    // return the minimum count
    for (k = i; k < j; k++)
    {
        count = MatrixChainOrder(p, i, k)
                + MatrixChainOrder(p, k + 1, j)
                + p[i - 1] * p[k] * p[j];
 
        if (count < min)
            min = count;
    }
 
    // Return minimum count
    return min;
}
int main()
{
    fast;
    int a[] = {1,5};
    int n = sizeof(a)/sizeof(a[0]);
    // cout << solve(a,0,1);
    cout << MatrixChainOrder(a, 1, n - 1);
    return 0;
}