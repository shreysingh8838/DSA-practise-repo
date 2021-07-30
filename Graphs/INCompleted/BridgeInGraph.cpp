#include <bits/stdc++.h>
using namespace std;
// Bridge is an edge whose presence determine the connection of two componenets
// means if we remove that edge(bridge) any graph could breakdown into components
int main()
{
    int n, m; cin >> n >> m;
    vector<pair<int,int>>adj[n];
    for(int i = 0; i<m; i++){
        int u,v,wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({u,wt});
    }
    
    return 0;
}