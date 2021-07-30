#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// ALGO - made by me
// AS THE MATRIX IS SORTED IN SUCH A WAY THAT ALL ROWS ARE SORTED AND EVERY ROW IS SORTED COLUMN WISE AS IT COULD BE SPREAD AS SORTED array
// 1 TRAVERSE LINEARLY ROW WISE FOR THE FIRST AND LAST ELEMENT OF THE MARTIX AND CHECK WHETHER THE TARGET LIES IN THAT ROW OR not
// 2 IF THE TARGET IS SMALLER OR EQUAL THAN LAST ELEMENT OF THE ROW AND GREATER OR EQUAL THAN THE FIRST ELEMENT OF THE ROW(i.e i)
// 3 then row will be passed to the searchRow() function
// 4 here we will linearly iterate the same matrix row and find if the target is present in that row or not

class Solution
{
    bool searchRow(int i, vector<vector<int>> &matrix, int target)
    {
        for (auto it : matrix[i])
        {
            if (it == target)
                return true;
        }
        return false;
    }

public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            if (matrix[i][matrix[0].size() - 1] >= target && matrix[i][0] <= target)
            {
                return searchRow(i, matrix, target);
            }
        }
        return false;
    }
};
int main()
{
    fast;
    vector<vector<int>> matrix = {{1, 3}};
    int target = 3;
    Solution s;
    cout << s.searchMatrix(matrix, target);
    return 0;
}