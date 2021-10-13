#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// https://www.youtube.com/watch?v=sSno9rV8Rhg
int lcs(string x,int i, string y,int j){
    if(i==x.length() || j==y.length()) return 0;
    if(x[i]==y[j]) return 1 + lcs(x,i+1,y,j+1);
    else return max(lcs(x,i+1,y,j), lcs(x,i,y,j+1));
}
int main()
{
    fast;
    string x = "abcdee";
    string y = "acee";
    cout << lcs(x,0,y,0);
    return 0;
}