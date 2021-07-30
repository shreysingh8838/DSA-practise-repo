#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;
int maxLen(int A[], int n)
{
    // Your code here
    unordered_map<int,int> mpp;
    int maxi = 0;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += A[i];
        if(sum == 0) maxi = i+1;
        else{
            if(mpp.find(sum)!=mpp.end()){
                maxi = max(maxi,i-mpp[sum]);
            }
            else{
                mpp[sum] = i;
            }
        }
    }
    return maxi;
}
int main()
{
    fast;

    return 0;
}