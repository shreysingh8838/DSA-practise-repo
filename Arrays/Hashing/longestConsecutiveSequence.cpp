#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

class Solution
{
    // Algo
    // becoz the given array does contain duplicates and elements in nonsequential order but that didnt matter to us
    // so we just created set to get non duplicates and rather sorted elements
    // insert every element to set
    // create a resultant variable to store our final  result
    // again traverse through the given array and let the element at present as (num)
    // check if the set contains (num-1); if it does
    //     we will start are current seq as 1 and mark that num as currentNum
    //     also check with while loop to find if set contains (num+1) if it does
    //         we will increment our (currentNum+1) also increment our current Sequence (currentSeq+1);
    //         this loop goes it set contains all the next upcoming integers
    // when the while loop ended we will check the maximum of previous longestSeq or currentSeq and assign to the longestSeq
    // at last return the longest sequence.
public:
    int longestConsecutive(vector<int> &nums)
    {
        set<int> s;
        for (int num : nums)
        {
            s.insert(num);
        }
        int longestSeq = 0;
        for (int num : nums)
        {
            if (!s.count(num - 1))
            {
                int currentNum = num;
                int currentSeq = 1;
                while (s.count(currentNum + 1))
                {
                    currentNum++;
                    currentSeq++;
                }
                longestSeq = max(longestSeq, currentSeq);
            }
        }
        return longestSeq;
    }
};
int main()
{
    fast;

    return 0;
}