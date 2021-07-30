#include <bits/stdc++.h>
using namespace std;
// topological sort only works for DAG (directed acyclic graph)
class Solution7
{
    void topoSortdfs(int s, vector<int> adj[], vector<int> &vis, stack<int> &st)
    {
        vis[s] = 1;
        for (auto it : adj[s])
        {
            if (!vis[it])
            {
                topoSortdfs(it, adj, vis, st);
            }
        }
        st.push(s);
    }

public:
    vector<int> topoSort(int n, vector<int> adj[])
    {
        stack<int> st;
        vector<int> vis(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (vis[i] == 0)
            {
                topoSortdfs(i, adj, vis, st);
            }
        }
        vector<int> topoDFS;
        while (!st.empty())
        {
            int node = st.top();
            st.pop();
            topoDFS.push_back(node);
        }
        return topoDFS;
    }
};
int main()
{
    int V, E;
    cin >> V >> E;

    //creation of adjancy list
    vector<int> adj[V + 1];

    //intialize the adjancy list
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    Solution7 s7;
	vector<int> topo = s7.topoSort(V,adj);
	for(auto it : topo) cout << it << " ";

    return 0;
}