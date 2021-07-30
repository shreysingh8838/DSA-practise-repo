#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

// Strongly connected graph
// SINGLE NODE IS ALWAYS A SCG
// IF WE CAN REACH FROM EVERY VERTEX TO EVERY OTHER VERTEX FROM A COMPONENT THEN ITS CALLED SCG

// but if we have a undirected graph, then we have 2 cases:
// 1. if it all contains only single component then it is scg
// 2. if it contains multiple components then all the components or nodes are their own scc

// PROCEDURE
// FIND ITS TOPOSORT-> TRANSPOSE THE GRAPH(REVERSE)->  NOW DFS ACCORDING THE TOPOSORTED ARRAY NODES (or finishing time)
// means we will use the toposorted array to find the starting node then we will mark the nodes according to the transpose graph->

// This function will traverse the dfs traversal and store all the toposorted nodes in a stack st
// REFER TOPOSORT DFS
void dfs(int node, stack<int> &st, vector<int> &vis, vector<int> adj[])
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, st, vis, adj);
        }
    }

    st.push(node);
} // NOW THE STACK HAS THE TOPOSORTED ARRAY OF NODES

// once the transpose adjancy list will be created than we will pass the node from the top of the stack(topo element) and find it dfs and will print it
// also when we find the dfs of a particular node than it is called as Strong component's part and will be mark visited so that none other SCC willl not inculde it
void revDfs(int node, vector<int> &vis, vector<int> transpose[])
{
    cout << node << " ";
    vis[node] = 1;
    for (auto it : transpose[node])
    {
        if (!vis[it])
        {
            revDfs(it, vis, transpose);
        }
    }
}

int main()
{
    // TO TAKE THE INPUT OF THE GRAPH
    int n, m; // no of nodes and no of edges
    cin >> n >> m;
    int count = 0;
    vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v; // node and its other directed other node
        adj[u].push_back(v);
    }

    // procedure to find the toposort using DFS which uses stack
    stack<int> st;
    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, st, vis, adj);
        }
    }

    // created a new adjancy list  which will store exactly opposite direction of node edges
    vector<int> transpose[n];

    // traverse every node and it connection from adj's list and then put input in transpose's list as in reverse order
    for (int i = 0; i < n; i++)
    {
        vis[i] = 0;
        for (auto it : adj[i])
        {
            transpose[it].push_back(i);
        }
    }

    // NOW we are selecting the nodes from the intial toposorted stack and the value will passed to node and it is passed to dfs call for the function of transpose's list
    // Every DFS call will represent a particular SCC
    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        if (!vis[node])
        {
            cout << "SCC: ";
            count++;
            revDfs(node, vis, transpose);
            cout << endl;
        }
    }
    cout << "Number of SCC's are : " << count;
}

/*
5 5
1 0
0 2
2 1
0 3
3 4
*/
