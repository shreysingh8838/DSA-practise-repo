#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

class Solution
{
    bool isSafe1(int i, int j, vector<string> &board, vector<vector<string>> &ans, int n)
    {

        int copyrow = i;
        int copycol = j;
        // for checking in 2nd quadrant (-x,-y)
        while (i >= 0 && j >= 0)
        {
            if (board[i][j] == 'Q')
                return false;
            i--, j--;
        }

        i = copyrow;
        j = copycol;
        //for checking in the same row but previous columns (-x)
        while (j >= 0)
        {
            if (board[i][j] == 'Q')
                return false;
            j--;
        }

        i = copyrow;
        j = copycol;
        //for checking in the 3rd quadrant (-x,y)
        while (j >= 0 && i < n)
        {
            if (board[i][j] == 'Q')
                return false;
            j--;
            i++;
        }
        return true;
    }

    // recurssion works columns wise we are checking column wise if that queen is possible or not
    void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n)
    {
        // if all the column's points are decided and satisfied then enter that board on to the ans
        if (col == n)
        {
            ans.push_back(board);
        }

        //traversing row wise for each column
        for (int row = 0; row < n; row++)
        {
            if (isSafe1(row, col, board, ans, n))
            { // here first we check if the point is suitable to put queen mark or not
                // when it get selected than mark that point as Q and futher move the recurrsion to the next column
                board[row][col] = 'Q';
                solve(col + 1, board, ans, n);
            }
            // backktracking if any solution gets wrong then all the points will be reverted as unmarked
            board[row][col] = '.';
        }
    }

public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for (int i = 0; i < n; i++)
        {
            board[i] = s;
        }
        solve(0, board, ans, n);
        return ans;
    }
};

int main()
{
    fast;

    return 0;
}