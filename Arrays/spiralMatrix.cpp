#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> res;
        int rs = 0, cs = 0;
        int re = matrix.size() - 1, ce = matrix[0].size() - 1;
        while (rs <= re && cs <= ce)
        {
            for (int i = cs; i <= ce; i++)
                res.push_back(matrix[rs][i]);
            rs++;
            for (int i = rs; i <= re; i++)
                res.push_back(matrix[i][ce]);
            ce--;
            if (rs <= re && cs <= ce)
            {
                for (int i = ce; i >= cs; i--)
                    res.push_back(matrix[re][i]);
                re--;
            }
            if (rs <= re && cs <= ce)
            {
                for (int i = re; i >= rs; i--)
                    res.push_back(matrix[i][cs]);
                cs++;
            }
        }
        return res;
    }
};
int main()
{
    fast;

    return 0;
}