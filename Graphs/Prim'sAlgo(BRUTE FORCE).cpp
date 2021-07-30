#include <bits/stdc++.h>
using namespace std;
/*
                                        ***********Minimum Spanning Tree************
                                Number of node is n then it necessary to have no. of edges n-1
                We have to make the graph such as that every node is reachable to any other node of the same graph


                                    The above defination are presented for the Spanning Tree
But the Minimum word is for the shortest cost(weighted) tree (which is being calculated by adding the weights of all the edges of the graph) 

                                                Should not have cycle

*/
int main()
{
    // input of the adjancy list of the graph edges
    int n, m;
    cin >> n >> m;
    // graph is stored in adj as vector of array of pairs of int, each index of vector represent the nth node and that nth node contains a array with pair genrics which include the neighbour node with weight of the associated edge
    vector<pair<int, int>> adj[n];
    for (int i = 0; i < m; i++)
    {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back(make_pair(v,wt));
        adj[v].push_back(make_pair(u,wt));
    }

    int parent[n]; // final output will be displayed in this array (it is used to mark the adjacent node which is connected to the nth index through minimum cost edge)
    int key[n];    // to mark the minimum cost to any of its adjacent node for the nth index node
    bool mst[n];   // array to check either the node is visited or not

    for (int i = 0; i < n; i++)
    {
        key[i] = INT_MAX;
        mst[i] = false;
    }

    /*
    0 --- 1 --- 2
    |  /  |  /
    | /   | / 
    3     4
    */

    //Intial Node is set as 0 we can ask for this from the user also
    key[0] = 0;
    parent[0] = -1;
    int answeight = 0;
    //First of all we will find the min value index in the key array (i.e key[0]=0)
    for (int i = 0; i < n - 1; i++)
    {
        int mini = INT_MAX;
        int u;
        for (int v = 0; v < n; v++)
        {
            if (key[v] < mini && mst[v] == false)
            {
                mini = key[v];
                u = v;
            }
        }
        //First check it must be false then mark it as MST[0] = true
        mst[u] = true;

        for (auto it : adj[u])
        {
            int v = it.first;
            int weight = it.second;
            //Next find its adjacent nodes and select an edge with the minimum cost respective of the src and that node
            //(i.e, 0->2{wt->2}, 0->6{wt->6}; so 2 got selected)
            if (mst[v] == false && weight < key[v])
            {
                //then put at the adjacent node'th index in parent array with that node as a value (parent -> -1,0,-1,-1,-1)
                parent[v] = u;
                //at the same time in the key array; make the key value at the adjacent node'th index as the minimum cost edge value
                key[v] = weight;
            }
        }
    }


    for (int i = 1; i < n; i++)
    {
        cout << parent[i] << " : " << i << "\n";
    }
    return 0;
    //now, also the other left over adjacent node of 0 (i.e 3 with cost of 6) make similar changes in parent array & key array
    //then, we will find the minimum value in keyarray which also has MST[] as false (i.e 1(key[1]=2 which is minimal) so, for now main node is 1) and similar steps for 1 also
    //But now this tym while searching minimum cost adjacent node we will not include zero node in this as its earlier attached
}