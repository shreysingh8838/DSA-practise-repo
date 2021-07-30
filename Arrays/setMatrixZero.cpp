#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

//Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]

// Not proper optimal solution as its space complexity is size of vector pair we have created But for the time complexity its an self made optimal solution
// tc-O(n^2) and sc-O(m) : m is number of zeros present
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        vector<pair<int, int>> coordinates;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    coordinates.push_back({i, j});
                }
            }
        }
        for (auto it : coordinates)
        {
            int k = it.first;
            int l = it.second;
            for (int i = 0; i < matrix.size(); i++)
            {
                matrix[i][l] = 0;
            }
            for (int i = 0; i < matrix[0].size(); i++)
            {
                matrix[k][i] = 0;
            }
        }
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        coordinates.clear(); //destruction of vector
    }
};
int main()
{
    fast;
    Solution s1;
    vector<vector<int>> matrix = {{1, 1, 1, 1}, {1, 0, 1, 1}, {1, 1, 0, 0}, {0, 0, 0, 1}};
    s1.setZeroes(matrix);
    return 0;
}