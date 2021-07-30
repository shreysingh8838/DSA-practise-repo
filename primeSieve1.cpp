#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll m;
        cin >> m;
        ll n;
        cin >> n;
        if (m < 2)
            m = 2;
        for (ll i = m; i <= n; i++)
        {
            bool Yes = 0;
            for (ll j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    Yes = 1;
                    break;
                }
            }
            if (Yes != 1)
            {
                cout << i << endl;
            }
        }
        cout << endl;
    }
    return 0;
}