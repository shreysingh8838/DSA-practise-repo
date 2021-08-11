#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n==2) return 1;
        if(n==1) return 0;
        int counter = 0;
        int i =0;
        while(i<n-1){
            if(nums[i]>nums[i+1] && n-i>=nums[i]){
                i += nums[i];
                counter++;
                if(i==n-1) break;
            }
            else if(nums[i]<nums[i+1] && n-(i+1) >= nums[i+1]){
                i++;
                counter++;
                if(i==n-1) break;
            }
            else{
                i++;
                counter++;   
            }
        }
        return counter;
        }
};
int main()
{
    fast;

    return 0;
}