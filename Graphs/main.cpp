#include <bits/stdc++.h>
using namespace std;
#include "BFS.cpp"
#include "DFS.cpp"
#include "detectCycleUndirected(bfs).cpp"
#include "bipartiteGraph(bfs).cpp"
#include "topologicalSort(bfs).cpp"
#include "ShortestPathinUndirectedGraphwithUnitWeights.cpp"
#include "topologicalSort(DFS).cpp"
int main()
{

    int V, E;
    cin >> V >> E;

    //creation of adjancy list
    vector<int> adj[V + 1];

    //intialize the adjancy list
    // given adjancy list is prepared only for undirected graph
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //taking input of the bfs list from the function
    Solution1 sc1;
    vector<int> bfs = sc1.bfsOfGraph(V, adj);

    //printing the bfs of the given graph
    cout << " bfs : ";
    for (int i = 0; i < bfs.size(); i++)
    {
        cout << bfs[i] << " ";
    }

    //taking input of the dfs list from the function
    Solution2 sc2;
    vector<int> dfs = sc2.dfsOfGraph(V, adj);

    //printing the dfs of the given graph
    cout << " dfs : ";
    for (int i = 0; i < dfs.size(); i++)
    {
        cout << dfs[i] << " ";
    }

    //Cycle detection using bfs
    Solution3 s3;
    bool exist = s3.isCycle(V, adj);
    cout << "Cycle detection using bfs : " << exist << endl;

    //bipartite bfs
    Solution4 s4;
    cout << s4.isBipartite(V, adj) << endl;
    return 0;

    //topological sort using bfs
    Solution5 s5;
    vector<int> topo = s5.topoSort(V, adj);
    for (auto it : topo)
    {
        cout << it << " ";
    }

    //shortest distance between two nodes source to targer in an undirected graph
    Solution6 s6;
    int src = 0;    // the source node from which the distance is calculated to the target
    int target = 6; // the target node
    s6.shortestDistanceUsingBFS(V, adj, src, target);
    return 0;

    //topological sort using DFS
    Solution7 s7;
    vector<int> topo = s7.topoSort(V, adj);
    for (auto it : topo)
    {
        cout << it << " ";
    }

    //shortest distance between two nodes source to targer in an directed graph
    //Solution s8 its main function is inside that file only as it has weighted graph also which we could not add here

    //DAGshortestDistance.cpp

    //Prim's Algorithm
}