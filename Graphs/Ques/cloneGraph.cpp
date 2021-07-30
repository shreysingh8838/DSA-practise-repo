#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

//Given in the Ques
// Definition for a Node.
class Node
{
public:
    int val;
    vector<Node *> neighbors;
    Node()
    {
        val = 0;
        neighbors = vector<Node *>();
    }
    Node(int _val)
    {
        val = _val;
        neighbors = vector<Node *>();
    }
    Node(int _val, vector<Node *> _neighbors)
    {
        val = _val;
        neighbors = _neighbors;
    }
};

//Actual answer
class Solution
{
    void dfs(Node *node, Node *copy, vector<Node *> &visited)
    {
        //mark the node as visited
        visited[copy->val] = copy;
        for (auto it : node->neighbors)
        {
            if (visited[it->val] == NULL)
            {
                Node *newNode = new Node(it->val);
                // we have create a new node named "newNode" and now added it to the neighbor array
                copy->neighbors.push_back(newNode);
                // using this we will mark visited the nonvisited nodes
                dfs(it, newNode, visited);
            }
            else
            {
                //using this we can add node to the neighbor's array which earlier marked aswell
                copy->neighbors.push_back(visited[it->val]);
            }
        }
    }

public:
    Node *cloneGraph(Node *node)
    {
        //base condition
        if (node == NULL)
            return NULL;
        //making visited array of datatype Node*
        vector<Node *> visited(1000, NULL);
        //making newly copy root which is actually head
        Node *copy = new Node(node->val);
        //DFS call called only for once
        dfs(node, copy, visited);
        return copy;
    }
};

static int fastio = []()
{
    //#define endl '\n'
    std::ios::sync_with_stdio(false);
    //std::cin.tie(NULL);
    //std::cout.tie(0);
    return 0;
}();