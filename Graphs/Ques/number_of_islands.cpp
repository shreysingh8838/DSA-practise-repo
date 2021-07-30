#include <bits/stdc++.h>
using namespace std;

class Solution
{
    void mark_current_islands(vector<vector<char>> &grid, int r, int c, int x, int y)
    {
        //boundry cases for matrix
        if (x < 0 || x >= r || y < 0 || y >= c || grid[x][y] != '1')
            return;
        //Mark the cell as visited
        grid[x][y] = '2';

        //Make recurssive call in all the 4 adjacent sides
        mark_current_islands(grid, r, c, x - 1, y); // left
        mark_current_islands(grid, r, c, x, y - 1); // top
        mark_current_islands(grid, r, c, x + 1, y); // right
        mark_current_islands(grid, r, c, x, y + 1); // down
    }

public:
    int numIslands(vector<vector<char>> &grid)
    {

        //For Fast IO
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int rows = grid.size();
        //to check the base case for rows
        if (rows == 0)
            return 0;
        int columns = grid[0].size();

        // Iterate over all the cells of the vector
        int count = 0; // to count the number of islands
        // normal tranversing in a matrix and checking for any char value '1'
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (grid[i][j] == '1')
                {
                    mark_current_islands(grid, rows, columns, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};