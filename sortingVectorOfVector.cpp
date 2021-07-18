#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

int main()
{
    fast;
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {5, 9}};
    sort(intervals.begin(), intervals.end());
    for (int i = 0; i < intervals.size(); i++)
    {
        for (int j = 0; j < intervals[0].size(); j++)
            cout << intervals[i][j] << " ";
        cout << endl;
    }
    return 0;
}