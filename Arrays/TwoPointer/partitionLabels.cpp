#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// https://www.tutorialspoint.com/partition-labels-in-cplusplus
// https://www.youtube.com/watch?v=_I9di3CUOx4&t=902s
// algo
// https://leetcode.com/problems/partition-labels/
// define one map called cnt
// for i in range 0 to s, cnt[s[i]] := i
// j := 0, start := 0 and i := 0 and n := size of s
// define one array ans
// while i < n
// j := max of j and cnt[s[i]]
// if i = j, then insert i – start + 1 into ans and start := i + 1
// increase i by 1
// return ans

class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        vector<int> res;
        map<char,int> mp;
        for(int i =0; i<s.length(); i++){
            mp[s[i]] = i;
        }
        int i=0, j=0, prev=0;
        while(i<n){
            j = max(j,mp[s[i]]);
            if(i==j){
                res.push_back(i-prev+1);
                prev = i+1;
            }
            i++;
        }
        return res;
    }
};
int main()
{
    fast;

    return 0;
}