#include <bits/stdc++.h>
using namespace std;
class Solution6
{
    //using bfs
public:
    //src is the source element for which we have to determine the distance of all the other nodes
    void shortestDistanceUsingBFS(int n, vector<int> adj[], int src, int target)
    {
        // We have created a distance array
        int dist[n];
        // intialize every index of distance array with the largest number possible
        for (int i = 0; i < n; i++)
            dist[i] = INT_MAX;
        // genrated queue & intitalize the distance array for the source element with 0 and will push that source element to the queue at first
        queue<int> q;
        dist[src] = 0;
        q.push(src);
        // loop till every element is not traversed in the queue
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            // traversing around all the connected elements of the current node
            for (auto it : adj[node])
            {
                // here we have added 1 to make the distance from source to node and node to the current it iterator
                //and it will check whether we have to go to the same way or we have to find any other node
                if (dist[node] + 1 < dist[it])
                {
                    // if the distance of the source to the adjacent node from the current node is smaller  then we will update it by one
                    // and push that adjacent node to the queue
                    dist[it] = dist[node] + 1;
                    q.push(it);
                }
            }
        }
        // print the distance array value of the target index
        cout << dist[target] << "\n";
    }
};

/*
9 11 0
0 1 1 3 0 3 3 4 4 5 5 6 2 6 1 2 6 7 6 8 7 8
*/