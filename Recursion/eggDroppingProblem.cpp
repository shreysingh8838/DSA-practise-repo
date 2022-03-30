#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// https://www.youtube.com/watch?v=S49zeUjeUL0&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=43

int solve(int e, int f)
{
    // base conditions
    if (f == 1 || f == 0)
        return f;
    if (e == 1)
        return f;

    // finding a variable to store minimum ways
    int mini = INT_MAX;

    // traversing every floor to find the more appropiate floor to start dropping the eggs
    for (int k = 1; k <= f; k++)
    {
        // finding the worst cases from the every floor and store it in the temp
        int temp = 1 + max(solve(e - 1, k - 1), solve(e, f - k));

        // from all the worst cases we are assigning the minimum to the mini and will return it as our answer
        mini = min(temp, mini);
    }
    return mini;
}
int main()
{
    fast;
    int k = 3;
    int n = 26;
    cout << solve(k, n);
    return 0;
}