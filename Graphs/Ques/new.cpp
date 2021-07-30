#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;
vector<int> adj[50001];

ll dfs(ll node, ll parent)
{
    
}

void solve()
{
    int n;
    int x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll ans = dfs(1, -1);
    ans %= mod;
    cout << (ans*x)%mod << "\n";
    cout << ans << "\n";
    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}