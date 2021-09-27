#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

//GFG question
// striver solution
class Solution
{
    void funcsum(int index, int sum, vector<int> &arr, int N, vector<int> &finalsum)
    {
        if (index == N)
        {
            finalsum.push_back(sum);
            return;
        }
        funcsum(index + 1, sum + arr[index], arr, N, finalsum);
        funcsum(index + 1, sum, arr, N, finalsum);
    }

public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> finalsum;
        funcsum(0, 0, arr, N, finalsum);
        sort(finalsum.begin(), finalsum.end());
        return finalsum;
    }
};
int main()
{
    fast;
    vector<int> arr = {3, 1, 2};
    Solution s; 
    vector<int> ans = s.subsetSums(arr, 3);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}