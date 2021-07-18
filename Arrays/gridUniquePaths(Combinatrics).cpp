// HERE'S AN EXPLANATION TO THE ALGORITHM

//  ~Algorithm  : Combinatorial solution

//     1)Now we have observed that we can either go right(forward) or down
//         1.1) So as we can't go backwards or Up (ie every step we do make us go near the target)
//         1.2) => That we always take fixed amount of steps to reach the target
//         1.3) * total_steps = rows + cols - 2

//     2) Now this is just the problem of combination where we have to decide
//         2.1.a) In steps me se down steps kitne lene hai. (No. of ways to select down steps from total steps)
//                => Total down_steps we take = (rows-1).
//                => and No. of ways to select down steps from total steps => (total_steps C down_steps)
//                                            OR
//         2.1.b) In steps me se right steps kitne lene hai. (No. of ways to select right steps from total steps )
//                 => Total right_steps we take = (cols-1).
//                 => and No. of ways to select right steps from total steps => (total_steps C right_steps)
//     => SO WE TAKE MIN OF DOWN_STEPS AND RIGHT_STEPS AND CALCULATE COMBINATON WITH THAT

//     3) Formula to calulate * (n C r) = n*(n-1)*(n-2)*(n-3)../1*2*3*..r.
//        Now point to notice is that
//         => No. of terms in denominator is 'r'
//         => And No. of terms in numinator is also same as in denomintor
//     ==> val=val*(steps-i+1)/i;
//         i goes from 1 to min_of_right_steps_and_down_steps ; remember i should not be 0 , coz we are dividing with i , varna exception a jaega

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;
class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        int N = n + m - 2;
        int r = m - 1;
        double res = 1;

        for (int i = 1; i <= r; i++)
        {
            res = res * (N - r + i) / i;
        }
        return (int)res;
    }
};
int main()
{
    fast;

    return 0;
}