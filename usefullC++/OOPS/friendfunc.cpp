#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

class Addition{
    private : int a = 7;
    private : int b = 14;
    public : 
    friend int addition (Addition a1){
       return a1.a+a1.b; 
    }
};
int main()
{
    fast;
    Addition a1;
    cout << addition(a1);
    return 0;
}