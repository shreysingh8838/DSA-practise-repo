#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

void print(int (&a)[10000])
{
    int n = sizeof(a) / sizeof(a[0]);
    cout << n << "\n";
    for (auto it : a)
    {
        cout << it << " ";
    }
}
int main()
{
    fast;
    int m = 5;
    int a[m] = {100, 200, 300, 400};
    cout << sizeof(a) / sizeof(a[0]);
    return 0;
}

