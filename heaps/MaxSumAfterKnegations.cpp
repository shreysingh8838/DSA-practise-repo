#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// link - https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/

class Solution
{
public:
    int largestSumAfterKNegations(vector<int> &nums, int k)
    {
        // taking a min heap
        priority_queue<int, vector<int>, greater<int>> pq;
        // store the array in the heap
        for (int i = 0; i < nums.size(); i++)
        {
            pq.push(nums[i]);
        }
        // till k times the loop will work
        while (k--)
        {
            // negate the minimum value which is going to be returned by the minheap
            int m = -(pq.top());
            // delete the previous value which is non-negated
            pq.pop();
            // pushed the negated value
            pq.push(m);
        }

        int sum = 0;
        // traverse the whole heap and
        // find the total sum of the elements of heap
        while (!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }
        // return that sum
        return sum;
    }
};

int main()
{
    fast;

    return 0;
}