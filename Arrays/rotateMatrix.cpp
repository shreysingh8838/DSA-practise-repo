#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

//given matrix
// 1 2 3
// 4 5 6
// 7 8 9

// transpose
// 1 4 7
// 2 5 8
// 3 6 9

// transpose is reversed by columns
//rotation
// 7 4 1
// 8 5 2
// 9 6 3

class Solution
{
public:
    // Algo
    // Find transpose of the matrix then
    // reverse columns
    // tc-O(n^2) and sc-O(1)
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();

        // For transposing the matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // for reversing columns
        for (int i = 0; i < n; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
int main()
{
    fast;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    Solution s;
    s.rotate(matrix);
    cout << "after rotation @90 deg\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
