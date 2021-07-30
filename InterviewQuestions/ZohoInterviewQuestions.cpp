#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

int maxi(int a[], int n){
    int m = a[0];
    for(int i = 1; i<n; i++){
        if(a[i]>m) m = a[i];
    }
    return m;
}
int main()
{
    fast;
    
// Question-1
    // float h = 5;
    // float b=0.5;
    // float res = h;
    // while(h>=1){
    //     h = b*h;
    //     if(h>1) res += 2*h;
    //     cout << res << " ";
    // }
    // cout << endl << res;

// Question - 2
    // string s = "FADE";
    // for(int i = 0; i<s.size(); i++){
    //     char a = s[i];
    //     char b = a - 65;
    //     char c = 90 - b;
    //     cout << c ;
    // }

//  Question - 3
    // int a[] = {2,2,2,2};
    // int n = sizeof(a)/sizeof(a[0]);
    // int m = maxi(a, n);
    // bool vis[m+1] = {0};
    // for(int i = 0; i<n; i++){
    //     if(vis[a[i]] == 0) cout<<a[i] << " ", vis[a[i]] = 1;
    //     else {
    //         cout << 0 << " ";
    //         vis[a[i]] = 0;
    //     }
    // }

// Question - 5
    string a = "anime";
    string b = "aanimeee";
    char prev;
    int n = a.length();
    int m = b.length();
    int i = 0 , j= 0;
    while(i<n && j<m){
        if(a[i]==b[j]) {
            i++;
            j++;
            prev = a[i];
        }
        else{
            if(b[j]==prev){
                j++;
            }
            else{
                cout << 0 << " a";
                return 0;
            }
        }
    }
    if(j==m && i < n){cout << 0 << " b"; return 0;}
    else
    cout<<1;
    return 0;
}