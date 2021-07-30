#include <bits/stdc++.h>
using namespace std;
#define INF 1e9

//pre requisite : topological sort using DFS
class Solution8
{ //Toposorted Using DFS
    void topoSortdfs(int s, vector<pair<int, int>> adj[], int vis[], stack<int> &st)
    {
        vis[s] = 1;
        for (auto it : adj[s])
        {
            if (!vis[it.first])
            {
                topoSortdfs(it.first, adj, vis, st);
            }
        }
        st.push(s);
    }

public:
    void shortestPath(int src, int n, vector<pair<int, int>> adj[])
    {
        int vis[n] = {0};
        stack<int> st;
        // find the topological sort using dfs and store it into stack
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                topoSortdfs(i, adj, vis, st);
            }
        }

        // create a distance vector and initalise it with INT_MAX then
        vector<int> dist(n, 1e9);
        // replace the distance array value for the source index to 0 (as shortest the distance of source to source is always zero)
        dist[src] = 0;

        // loop till the stack is not empty
        while (!st.empty())
        {
            int node = st.top();
            st.pop();

            //if the node has been previously reached then it should not have distance value as 1e9 (INF)
            if (dist[node] != INF)
            {
                // traverse to all the adjacent nodes of the current node
                for (auto it : adj[node])
                {
                    // check if the distance value stored at a particular index before is greater than the sum we get from the previous adjacent distance value and current node distance (weight)
                    if (dist[node] + it.second < dist[it.first])
                    {
                        // if the new path is shorter than replace it to the sum of previous adjacent distance value and current node (weight)
                        dist[it.first] = dist[node] + it.second;
                    }
                }
            }
        }
        //print the distance vector
        for (int i = 0; i < n; i++)
        {
            (dist[i] == 1e9) ? cout << "INF " : cout << dist[i] << " ";
        }
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    // declaring a vector of array(whose has a pair and it have data type is int , int) using
    // vector of array : vector <int> adj[n+1]
    // and normal vector :  vector <int> adj ()
    vector<pair<int, int>> adj[n];
    for (int i = 0; i < n; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt});
    }
    Solution8 s8;
    // here we have kept the source node as zero
    s8.shortestPath(/* source node-> */ 0, n, adj);
    return 0;
}