#include <bits/stdc++.h>

// DAG graph

using namespace std;
class Solution
{
    void dfs(vector<vector<int>> &graph, vector<vector<int>> &result, vector<int> &path, int u)
    {
        // first we will push the node (either could be source or in between or target)
        path.push_back(u);
        // Last node is the target node
        // Last Node = graph.size()-1
        // check if we reached the last node or not
        if (u == graph.size() - 1)
            // if the we have reached the target node with the specific path then
            // that path will be pushed into the result vector of vector
            result.push_back(path);

        // incase of traversal or if we have not reached the target
        else
        {
            // here we will traverse all the assigned outdegree nodes of a certain node
            for (int v : graph[u])
                // pass the next node as the source node rest will remain the same
                dfs(graph, result, path, v);
        }
        path.pop_back();
    }

public:
    vector<vector<int>> AllPathsFromSourceToTarget(vector<vector<int>> &graph)
    {
        // Created a result vector of vector which will store all different paths
        // created a vector which will store every node we pass from source to target
        vector<vector<int>> result;
        vector<int> path;
        // in this private function source is given as 0
        //here we uses recurrsion
        dfs(graph, result, path, 0);
        // In this return the result vector of vector
        return result;
    }
};

int main()
{
    vector<vector<int>> graph;
    // these are the out degree of the particular node like 1,2 are the out degree of node 0 also 3 is the neighbour of 1 and 2 while 3 has the none outdegree
    graph = {{1, 2}, {3}, {3}, {}};
    Solution s;
    vector<vector<int>> result = s.AllPathsFromSourceToTarget(graph);
    int outercount = result.size();
    for (int i = 0; i < result.size(); i++)
    {
        int innercount = result[i].size();
        cout << "[ ";
        for (auto it : result[i])
        {
            cout << it;
            innercount--;
            if (innercount)
                cout << ", ";
        }
        outercount--;
        if (outercount)
            cout << " ], ";
        else
            cout << " ] ";
    }
    return 0;
}