#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// didn't understand algo
// watch video
// https://www.youtube.com/watch?v=l0YC3876qxg&list=PLgUwDviBIf0rPG3Ictpu74YWBQ1CaBkm2&index=14

class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1.0;
        long nn = n;
        if (nn < 0)
            nn = -1 * nn;
        while (nn > 0)
        {
            if (nn % 2 == 1)
            {
                ans *= x;
                nn--;
            }
            else
            {
                x *= x;
                nn /= 2;
            }
        }
        if (n < 0)
            ans = (double)(1.0) / (double)(ans);
        return ans;
    }
};
int main()
{
    fast;

    return 0;
}