#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

class Solution
{
    //Solution using Flood Fill Algorithm

    void fill(vector<vector<char>> &grid, vector<vector<int>> &vis, int i, int j)
    {

        //to make a boundry
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
            return;

        // to check if that is not a land than its of no use
        if (grid[i][j] != '1')
            return;

        // check if its previously visited or not
        if (vis[i][j] == 1)
            return;

        // if its niether water and nor visited
        // than we will make it visited
        vis[i][j] = 1;

        // and move in all the four directions using DFS
        fill(grid, vis, i + 1, j);
        fill(grid, vis, i, j - 1);
        fill(grid, vis, i - 1, j);
        fill(grid, vis, i, j + 1);
    }

public:
    int numIslands(vector<vector<char>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();

        //Creating a visited vector which marks my visit
        vector<vector<int>> vis;
        for (int i = 0; i < m; i++)
        {
            vector<int> x(n, 0);
            vis.push_back(x);
        }

        // counter to count the number of switch whenever we found a new island
        int counter = 0;

        //traversing the whole area
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {

                // cheking if the grid is land and not visited yet
                if (grid[i][j] == '1' && vis[i][j] == 0)
                {
                    counter++; // here to upgrade as we have reached some new '1' new land
                    fill(grid, vis, i, j);
                }
            }
        }
        return counter;
    }
};
int main()
{
    fast;

    return 0;
}