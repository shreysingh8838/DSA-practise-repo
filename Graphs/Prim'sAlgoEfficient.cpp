#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n];
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }

    int key[n];
    int parent[n];
    bool mst[n];

    for (int i = 0; i < n; i++)
    {
        mst[i] = false;
        key[i] = INT_MAX;
    }

    // normal syntax for priority queue max heap -> priority_queue<int> g = gq;
    // Syntax for a min heap  0  priority queue -> priority_queue <int, vector<int>, greater<int>> g = gq;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    key[0] = 0;
    parent[0] = -1;
    //here we are pushing the key'th index value and key'th index as 0 , 0
    pq.push({0, 0});

    // Run the loop till all the nodes have been visited
    // because in the brute code we checked for mstSet[node] == false while computing the minimum
    // but here we simply take the minimal from the priority queue, so a lot of times a node might be taken twice
    // hence its better to keep running till all the nodes have been taken.

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        mst[u] = true;
        for (auto it : adj[u])
        {
            int v = it.first;
            int weight = it.second;
            if (mst[v] == false && key[v] > weight)
            {
                key[v] = weight;
                parent[v] = u;
                pq.push({key[v], v});
            }
        }
    }

    for (int i = 1; i < n; i++)
    {
        cout << parent[i] << " : " << i << endl;
    }
    return 0;
}