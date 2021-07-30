#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;
// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

// Input: numRows = 1
// Output: [[1]]
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> a;
        for (auto i = 0; i < numRows; i++)
        {
            vector<int> b;
            for (auto j = 0; j <= i; j++)
            {
                if (j == 0 || j == i)
                {
                    b.push_back(1);
                }
                else
                {
                    b.push_back(a[i - 1][j] + a[i - 1][j - 1]);
                }
            }
            a.push_back(b);
        }
        return a;
    }
};

int main()
{
    fast;
    Solution s1;
    vector<vector<int>> gen = s1.generate(30);
    for (int i = 0; i < gen.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << gen[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}