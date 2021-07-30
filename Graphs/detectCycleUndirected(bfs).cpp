#include <bits/stdc++.h>
using namespace std;
class Solution3
{
    bool cycleDetection(int s, int n, vector<int> adj[], vector<int> &vis)
    {
        queue<pair<int, int>> q;
        vis[s] = 1;
        q.push({s, -1});
        while (!q.empty())
        {
            int node = q.front().first;
            int par = q.front().second;
            q.pop();
            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = 1;
                    q.push({it, node});
                }
                else if (par != it)
                {
                    return true;
                }
            }
        }
        return false;
    }

public:
    bool isCycle(int n, vector<int> adj[])
    {
        vector<int> vis(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                if (cycleDetection(i, n, adj, vis))
                    return true;
            }
        }
        return false;
    }
};
