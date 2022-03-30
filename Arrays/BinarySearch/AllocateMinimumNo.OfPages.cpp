// B. Vanya and Lanterns
// https://codeforces.com/problemset/problem/492/B
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int n; int l;
//     cin >> n >> l;
//     vector<int> v;
//     for(int i=0; i<n; i++){
//         cin >> v[i];
//     }
//     int d = INT_MIN;
//     sort(v.begin(), v.end());
//     for(int i=0; i<n-1; i++){
//         int diff = v[i+1]-v[i];
//         if(diff > d) d = diff;
//     }
//     int side = 2 * max(v[0]-0, l-v[n-1]);
//     double ans = max(d, side);
//     printf("%.10f\n",ans/2.);
// }

// Cifera
// https://codeforces.com/problemset/problem/114/A
// #include <bits/stdc++.h>
// using namespace std;
// #define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
// #define ll long long int
// const int mod = 1000000007;

// int main()
// {
//     fast;
//     int k,l;
//     cin >> k >> l;
//     int i = 1;
//     int product = k;
//     while(product < 2147483647 && product > l){
//         product *= k;
//         if(product == l) {
//             cout << "YES" << endl << i;
//             return 0;
//         }
//         else i++;
//     }
//     cout << "NO";
//     return 0;
// }

