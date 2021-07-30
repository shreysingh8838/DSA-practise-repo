#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

int main()
{
    fast;
    int V, E;
    cin >> V >> E;
    int source;
    cin >> source;
    vector<pair<int, int>> adj[V];
    for (int i = 0; i < E; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back(make_pair(u, wt));
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> distTo(V + 1, INT_MAX);
    distTo[source] = 0;
    pq.push({0, source});
    while (!pq.empty())
    {
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();
        for (auto it : adj[prev])
        {
            int next = it.first;
            int nextWeight = it.second; //(prev ---Weight> next)
            if (distTo[next] > distTo[prev] + nextWeight)
            {
                distTo[next] = distTo[prev] + nextWeight;
                pq.push({distTo[next], next});
            }
        }
    }
    cout << "Vertex"
         << "   "
         << "Distance \n";
    for (int i = 0; i < V; i++)
    {
        cout << i << "        " << distTo[i] << "\n";
    }
    return 0;
}