#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    int n = 4;
    int a[n] = {1, 2, 3, 4};
    int ysum = 0;
    for (int i = 0; i < n; i++)
    {
        ysum += a[i];
    }
    int maxsum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (maxsum < sum)
        {
            maxsum = sum;
        }
        if (sum < 0)
            sum = 0;
    }
    cout << maxsum << "\t" << ysum << "\n";
    int asum = maxsum;
    if (asum >= ysum)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}