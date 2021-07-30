#include <bits/stdc++.h>
using namespace std;

// topological sort only works for DAG (directed acyclic graph)
//topological sort is arrangement of nodes such that if the node A is directed edge towards edge B then A should come before in the sorted array
// A --> B
// IN this cycle should not exist because if there is cycle then A to B , B to C and C to A so here topological sort could not exist
class Solution5
{
public: //Kahn's Algorithm
    vector<int> topoSort(int n, vector<int> adj[])
    {
        //here we will using bfs so we intialise queue
        queue<int> q;
        // indegree vector will be genrated in the following for loop
        vector<int> indegree(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (auto it : adj[i])
            {
                // count number of adjacent nodes of a particular node (i)
                // and (it) are its adjacent nodes
                indegree[it]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (indegree[i] == 0)
            {
                // push every node to the queue whose indegree is zero
                q.push(i);
            }
        }
        //main topological sorted vector will be stored in the topo vector
        vector<int> topo;
        //loop will work till the queue is not empty
        while (!q.empty())
        {
            // temporary variable will store the first element of the queue and then it will be removed from the queue
            int node = q.front();
            q.pop();
            // that first element of the queue will also be pushed in the main topo vector
            topo.push_back(node);
            //for every connected node will decrease the indegree of the connected node
            for (auto it : adj[node])
            {
                indegree[it]--;
                // and if the indegree of the particular node is zero than it will pushed to the main topo vector
                if (indegree[it] == 0)
                    q.push(it);
            }
        }
        return topo;
    }
};

/*
6 6
5 0
4 0
4 1 
3 1
2 3
5 2
*/