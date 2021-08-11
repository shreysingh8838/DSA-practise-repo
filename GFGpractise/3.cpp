#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int m = 1000000007;

class Solution {
    int findsum(int start, int end, vector<int>A){
        int sum = 0;
        for(int i = start; i<end; i++){
            sum += A[i];
        }
        return sum;
    }
    int abs(int N){
        if(N<0){
            return -N;
        }
        return N;
    }
  public:
    string solve(int N, int X, vector<int> A) {
        // code here
        const int mod = 1000000007;
        if(X==0 || N==0) return "NO";
        for(int i = 0; i<N; i++){
            if(A[i]==-10){
                int sum = findsum(0,i,A);
                int wholesum = findsum(0, N, A);
                if(abs(sum%m)!=0 && abs(wholesum%m)==0)     return "YES";
                else {
                    A[i]=-1;
                    int sum = findsum(0,i,A);
                    int wholesum = findsum(0, N, A);
                    if(abs(sum%m)!=0 && abs(wholesum%m)==0)     return "YES";
                    else{
                        A[i]=0;
                        int sum = findsum(0,i,A);
                        int wholesum = findsum(0, N, A);
                        if(abs(sum%m)!=0 && abs(wholesum%m)==0)     return "YES";
                        else{
                            A[i]=1;
                            int sum = findsum(0,i,A);
                            int wholesum = findsum(0, N, A);
                            if(abs(sum%m)!=0 && abs(wholesum%m)==0)     return "YES";
                        }
                    }
                }
            }
        }
        return "NO";
    }
};
int main()
{
    fast;

    return 0;
}