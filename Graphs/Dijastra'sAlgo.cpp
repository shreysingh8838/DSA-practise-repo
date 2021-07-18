#include <bits/stdc++.h>
using namespace std;

//Dijkstra's algorithm is an algorithm for finding the shortest paths between nodes in a graph, which may represent,
// for example, road networks.
//USING BFS AND MIN HEAP

// ALGO
// 1) Create a Min Heap of size V where V is the number of vertices in the given graph. Every node of min heap contains vertex number and distance value of the vertex.
// 2) Initialize Min Heap with source vertex as root (the distance value assigned to source vertex is 0). The distance value assigned to all other vertices is INF (infinite) IN distTo vector which stores our resultant distances for each nodes from source.
// 3) While Min Heap is not empty, do following
// …..a) Extract the vertex with minimum distance value node from Min Heap. Let the extracted vertex be u.
// …..b) For every adjacent vertex v of u, check if v is in Min Heap. If v is in Min Heap and distance value is more than weight of u-v plus distance value of u, then update the distance value of v.

int main()
{
    int n, m, source; //Since we have to find the shortest distance from all the nodes for a particular node , So that particular node is Source here
    cin >> n >> m;
    cin >> source;
    vector<pair<int, int>> adj[n + 1]; // 1-indexed adjacency list for of graph

    int u, v, wt;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> wt;
        adj[u].push_back(make_pair(v, wt));
        adj[v].push_back(make_pair(u, wt));
    }

    // Dijkstra's algorithm begins from here
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    // here we have used min-heap for getting the smallest distance at the top of the priority queue;
    // In pair of => (distance from source to node, the node)
    // proper syntax of min heap is given in prims efficient algo program
    vector<int> distTo(n + 1, INT_MAX); // 1-indexed array for calculating shortest paths;
    // in this distance array there is ditance is stored from to source to nth node which is nth index values
    // final solution will displayed through this distance array

    distTo[source] = 0;   // marking the distance from source to source as zero
    pq.push({0, source}); // pushing the first distance as zero and for the node is source only

    //traversing through the pqueue similar to BFS
    while (!pq.empty())
    {
        // pq.top() will give us the pair with the minimum distance from source to the which ever node bcoz pq is a min-heap
        // and now we are storing the minimum distance into dist variable
        // and prev is the the node which is carrying the distance from source to it
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop(); // then we will popup that pair from pqueue

        //for traversing the adjacent nodes of the prev node
        vector<pair<int, int>>::iterator it;
        for (it = adj[prev].begin(); it != adj[prev].end(); it++)
        {
            // it is the adjacent node of the prev
            // it (i.e first and second is based upon the adjaency list)
            int next = it->first;      // it will store the node
            int nextDist = it->second; // it will store the edge weight from prev node to the next node

            // sum of the distance array value for the "prev" node and the edge weight from "prev" to "next" --> this will give the new path or distance
            // from source to node "next"
            // now we are checking if the any earlier distance array value for the node "next" is greater than the new sum or not
            if (distTo[next] > distTo[prev] + nextDist)
            {
                // if the new path distance is smaller than we will assign that distance to the distance array for the "next" node'th index
                distTo[next] = distTo[prev] + nextDist;
                // also we will push that distance and that next node to the pqueue
                pq.push(make_pair(distTo[next], next));
            }
        }
    }
    // Finally we will print all the distance array values along with thier index / nodes
    cout << "Source : " << source << endl;
    cout << "Vertex"
         << "   "
         << "Distance \n";
    for (int i = 0; i < n; i++)
    {
        cout << i << "        " << distTo[i] << "\n";
    }
    return 0;
}

/*
9 14
0 1 4
0 7 8
1 7 11
7 8 7
1 2 8
7 6 1
8 6 6
8 2 2
6 5 2
2 5 4
2 3 7
3 5 14 
3 4 9
5 4 10
*/

/*

Vertex   Distance from Source
0                0
1                4
2                12
3                19
4                21
5                11
6                9
7                8
8                14

*/