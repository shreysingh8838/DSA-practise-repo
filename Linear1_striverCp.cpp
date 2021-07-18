#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll min(ll a, ll b){
    if(a>b) return b;
    else return a;
}

void solve(){
    ll m,n;
    ll k;
    cin >> m >> n >> k;
    ll mat[m+1][n+1] = {'\0'};
    ll count = 0;
    for (ll i = 1; i <= n; i++)
        for (ll j = 0; j <=m; j++)
        {
            cin >> mat[i][j];
            if(mat[i][j] >= k) 
            {   count++;
            }
        }
        
    ll aux[n+1][m+1];
    memset(aux,0,sizeof(aux));
    aux[1][1] = mat[1][1];
    for(ll j = 2; j<=m; j++)
        aux[1][j] = aux[1][j-1] + mat[1][j];
    
    for(ll i = 2; i<=n; i++)
        aux[i][1] = aux[i-1][1] + mat[i][1];
    
    
    for(ll i = 2; i<=n; i++)
        for(ll j = 2; j<=m; j++)
            aux[i][j] = aux[i-1][j] + aux[i][j-1] - aux[i-1][j-1] + mat[i][j];    


    ll q = min(n,m);
    for(ll size =2; size<=q; size++)
        for(ll i = n; (i-size)>=0; i--)
            for(ll j = m; (j-size)>=0; j--){
                ll temp = aux[i][j] - aux[i-size][j] - aux[i][j-size] + aux[i-size][j-size];
                if(((double)temp/(double)(size*size))>=k) count++;   
            }

    cout << count << endl;   
}


int main()
{   
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll t; cin >> t;
    while (t--)
        solve();

    return 0;
 }