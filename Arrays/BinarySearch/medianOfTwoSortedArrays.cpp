#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// BRUTE FORCE - TC(3n)
// algo
// merge nums1 and nums2 into a temp vector
// sort temp
// find the middle element if size is odd then its ans
// if size is even then their average is ans

// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         vector<int> res;
//         for(auto it : nums1){
//             res.push_back(it);
//         }
//         for(auto it : nums2){
//             res.push_back(it);
//         }
//         sort(res.begin(),res.end());
//         double ans = 0;
//         if(res.size()%2 == 0){
//             ans = ((double)res[res.size()/2] + res[res.size()/2 -1])/2;
//         }else{
//             ans = (double)res[(res.size()-1)/2];
//         }
//         return ans;
//     }
// };

int main()
{
    fast;

    return 0;
}