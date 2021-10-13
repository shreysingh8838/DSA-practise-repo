#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;
// accepted solution in leetcode
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int ans=0, i=0,j=0;
//             set<int> mp;

//             while(i<s.size())
//             {
//                     if(mp.count(s[i]) == 1)
//                     {
//                             mp.erase(s[j++]);
//                     }

//                     else
//                     {
//                             mp.insert(s[i++]);
//                            if(mp.size()>ans)
//                            {
//                                    ans=mp.size();
//                            }
//                     }

//             }
//             return ans;
//     }
// };
class Solution
{
    //  afjbasabsfjbjsdbfajbjagbk
public:
    bool checksubstring(string ans)
    {
        unordered_map<char, int> mp;
        for (int i = 0; i < ans.length(); i++)
        {
            mp[ans[i]]++;
        }
        for (auto x : mp)
        {
            if (x.second > 1)
                return false;
        }
        return true;
    }
    int lengthOfLongestSubstring(string s)
    {
        int n = s.length();
        int maxcount = INT_MIN;
        if (n == 0)
            return 0;
        for (int i = n; i > 0; i--)
        {
            for (int j = 0; j < n; j += i)
            {
                string ans = "";
                for (int k = j; k < i + j; k++)
                {
                    ans += s[k];
                }
                if (checksubstring(ans))
                {
                    if (maxcount < i)
                    {
                        maxcount = i;
                    }
                }
            }
        }
        return maxcount;
    }
};
int main()
{
    fast;

    return 0;
}