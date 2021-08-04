#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;


int main()
{
    int n=10;
    fast;
    for(int i = 0; i<n;){
        cout << ++i << " ";
    }
    cout << endl;
    for(int i = 0; i<n;){
        cout <<  i++ << " ";
    }
    return 0;
}