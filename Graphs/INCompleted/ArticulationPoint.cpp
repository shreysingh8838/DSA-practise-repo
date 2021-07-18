#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

void dfs(int node, int parent, vector<int> &vis, vector<int> &tin, vector<int> &low, int timer, vector<int> &isArticulation, vector<int> adj[])
{
    int child = 0;
    tin[node] = low[node] = timer++;
    vis[node] = 1;
    for (auto it : adj[node])
    {
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n];
    int u, v;
    for (int i = 0; i < m; i++)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> tin(n, -1);
    vector<int> low(n, -1);
    vector<int> vis(n, 0);

    vector<int> isArticulation(n, 0);
    int timer = 0;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, -1, vis, tin, low, timer, isArticulation, adj);
        }
    }
    return 0;
}