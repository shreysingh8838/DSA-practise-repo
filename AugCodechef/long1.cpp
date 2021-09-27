#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

int main()
{
    fast;
    int t;
    cin >> t;
    while(t--){
        set<int>s;
        for(int i = 0; i<4; i++){
            int a;
            cin >> a;
            s.insert(a);
        }
        if(s.size() == 4) cout << 2 << endl;
        if(s.size() == 2) cout << 1 << endl;
        if(s.size() == 1) cout << 0 << endl;
    }
    return 0;
}