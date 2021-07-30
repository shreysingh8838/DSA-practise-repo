#include <bits/stdc++.h>
using namespace std;
class Solution1
{
public:
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        //intializing the 2 main vectors bfs and vis (it marks the elements which are visited globally)
        vector<int> bfs;
        vector<int> vis(V + 1, 0);

        //this loop is for checking every component of the graph
        for (int i = 1; i <= V; i++)
        {
            //check weather a certain component is marked or not
            if (!vis[i])
            {
                // making the queue and then pushing the 1st node to it
                queue<int> q;
                q.push(i);

                //mark it visited
                vis[i] = 1;

                //adding every connected node to the queue and at the same time add them to bfs vector
                while (!q.empty())
                {
                    int node = q.front();
                    q.pop();
                    bfs.push_back(node);
                    //travversing the connected nodes to that particular node
                    for (auto it : adj[node])
                    {
                        //if the connected node is not visited before than push it to the queue and mark as visited
                        if (!vis[it])
                        {
                            q.push(it);
                            vis[it] = 1;
                        }
                    }
                }
            }
        }
        return bfs;
    }
};
