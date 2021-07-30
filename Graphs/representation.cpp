#include <bits/stdc++.h>
using namespace std;
int main()
{
    //n = no. of nodes
    //m = no. of edges
    //u is the first node (u -> v)
    //v is the second node
    int n, m;
    cin >> n >> m;

    /*  ADJACENT MATRIX FOR UNDIRECTED GRAPH
    int adj[n+1][n+1];
    for(int i = 0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    */

    /*//ADJANCY LIST For Undirected graph
    // declaring a vector of array(whose data type is int) using 
    // vector of array : vector <int> adj[n+1] 
    // and normal vector :  vector <int> adj ()
    vector <int> adj[n+1];
    for(int i =0; i <m; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
   */

    /* ADJANCY LIST For weighted undirected graph
    // declaring a vector of array(whose data type is int) using 
    // vector of array : vector <int> adj[n+1] 
    // and normal vector :  vector <int> adj ()
    vector<pair<int,int>> adj[n];
    for(int i = 0; i<m; i++){
        int u,v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v,wt});
        adj[v].push_back({v,wt});
    }
    */

    /*ADJANCY LIST FOR WEIGHTED DIRECTED GRAPH
    // declaring a vector of array(whose has a pair and it have data type is int , int) using 
    // vector of array : vector <int> adj[n+1] 
    // and normal vector :  vector <int> adj ()
    vector<pair<int,int>> adj[n];
    for(int i = 0; i<n; i++){
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v,wt});
    }
   */

    /* Print the adjancy list
    // traversing on all the elements of the vector adj
  for (int v = 0; v < n; ++v)
    {
        cout << "\n Adjacency list of vertex "
             << v;
        //Way to traverse the array provided to the particular element of vector adj
        for (auto x : adj[v])
           cout << "-> " << x;
        printf("\n");
    }
  */
}