#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// optimal solution - tc O(nlogn) + O(n) and spc - O(n)
class Solution
{
public:
    // intervals = [[1,3],[2,6],[8,10],[15,18]]
    // Output: [[1,6],[8,10],[15,18]]
    //Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        vector<int> temp = intervals[0];
        for (int i = 0; i < intervals.size(); i++)
        {
            if (temp[1] >= intervals[i][0])
            {
                temp[1] = max(intervals[i][1], temp[1]);
            }
            else
            {
                merged.push_back(temp);
                temp = intervals[i];
            }
        }
        merged.push_back(temp);
        return merged;
    }
};
int main()
{
    fast;
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {5, 9}};

    return 0;
}