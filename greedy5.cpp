#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll max(ll a[], ll n)
{
    ll max = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    return max;
}

int main()
{

    ll n;
    cin >> n;
    ll a[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    ll maxm = max(a, n);

    if (sum % 2 != 0 || sum < 2 * maxm)
    {
        cout << "NO\n";
        return 0;
    }
    else
        cout << "YES\n";

    return 0;
}