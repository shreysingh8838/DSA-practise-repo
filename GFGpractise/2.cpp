#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

class Solution
{
public:
    long long countTriplet(int N, vector<int> A, int X)
    {
        // Your code goes here
        long long count = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] % 2 != 0)
            {
                for (int j = X + i; j < N; j++)
                {
                    if (A[j] % 2 != 0)
                    {
                        for (int k = X + j; k < N; k++)
                        {
                            if (A[k] % 2 != 0)
                            {
                                count++;
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};
int main()
{
    fast;

    return 0;
}