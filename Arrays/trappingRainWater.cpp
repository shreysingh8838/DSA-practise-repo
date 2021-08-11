// same solution is also in two pointers and its the most optimal solution
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;
// 1st approach
//brute tc-O(N^2) sc-O(1)
// traverse the array once
// for every i , the unit of water that is stored in that i column will be
// min(left(i to 0) , right(i to n-1)) - a[i]
// and at same time do the sum for all of their water while traversing only

// class Solution {
//     int min(int start, int end){
//         if(start < end) return start;
//         return end;
//     }
//     int max(vector<int> &height, int start, int end){
//         int max = height[start];
//         for(int i=start; i<=end; i++){
//             if(height[i]>max) max = height[i];
//         }
//         return max;
//     }
// public:
//     int trap(vector<int>& height) {
//         //min(left,right) - arr[i]
//         int n =height.size();
//         int sum = 0;
//         for(int i=0; i<n-1;i++){
//             int water = min(max(height,0,i) , max(height,i,n-1)) - height[i];
//             sum += water;
//         }
//         return sum;
//     }
// };

// 2nd approach
// prefix max tc(3N) and sc(2N)
// better approach using prefix max and suffix max array to reduce the time of doing min and max
// now for every i do suffixmax[i] - prefixmax[i]
// atlast sum them all

class Solution {
public:
    // prefixMax = maxl
    // suffixMax = maxr
    int trap(vector<int>& height) {
        //min(left,right) - arr[i]

        int n =height.size();
        if(n<=2)
            return 0;
        int maxl[n];
        int maxr[n];
        maxl[0]=height[0];
        maxr[n-1]=height[n-1];
        for(int i=1;i<n;i++)
        {
            maxl[i]=max(maxl[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            maxr[i]=max(maxr[i+1],height[i]);
        }

        int sum = 0;
        for(int i=1; i<=n-2;i++){
            int water = min(maxl[i-1],maxr[i+1])-height[i];
            if(water>0) sum += water;
        }

        return sum;
    }
};

int main()
{
    fast;

    return 0;
}