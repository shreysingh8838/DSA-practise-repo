#include <iostream>
#define ll long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll total = 0;
            if (i - 1 >= 0)
                total++;
            if (j - 1 >= 0)
                total++;
            if (i + 1 < n)
                total++;
            if (j + 1 < n)
                total++;
            if (a[i][j] >= total)
            {
                cout << "NO \n";
                return;
            }
            a[i][j] = total;
        }
    }
    cout << "YES\n";
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
