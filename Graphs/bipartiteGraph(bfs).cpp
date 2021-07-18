#include <bits/stdc++.h>
using namespace std;
class Solution4
{
public:
    bool bipartiteBfs(int s, vector<int> adj[], int color[])
    {
        //intialized queue with the head node of the current component
        queue<int> q;
        q.push(s);
        //the color of the head is assigned as 1
        color[s] = 1;
        // loop till the queue is empty (means loop till every element of the current component is completed)
        while (!q.empty())
        {
            //node variable is intitilized from the first element of the queue and then it has been removed from the queue
            int node = q.front();
            q.pop();
            // now traversing to the elements connected to the same node list
            for (auto it : adj[node])
            {
                // if the color of the adjacent node is -1 then its color value will be subtracted with 1 and we will get the opposite color
                if (color[it] == -1)
                {
                    color[it] = 1 - color[node];
                    // then the adjacent node will be pushed into queue
                    q.push(it);
                }
                //if the color of the next node is equal to the previous node or the adjacent node then it will return false as it will not be a bipartite
                else if (color[it] == color[node])
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(int n, vector<int> adj[])
    {
        // making an array for color
        int color[n];
        // intializing every element with -1
        memset(color, -1, sizeof color);
        // iterating to check for all the components
        for (int i = 0; i < n; i++)
        {
            // if the color value is -1 then it means that node is unvisited
            if (color[i] == -1)
            {
                if (!bipartiteBfs(i, adj, color))
                    return false;
            }
        }
        return true;
    }
};

/*

*/