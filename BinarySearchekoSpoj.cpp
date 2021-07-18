#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;
//link -> https://www.youtube.com/watch?v=JAfJssvFgDI

int gettingWood(vector<int> a, int mid)
{
    int ans = 0;
    for (auto it : a)
    {
        int left = it - mid;
        ans += left;
    }
    return ans;
}
int main()
{
    vector<int> a = {8, 6, 9, 5, 3};
    int x = 8;

    int low = 0, high = *max_element(a.begin(), a.end()), mid;
    cout << gettingWood(a, 4) << endl;
    cout << gettingWood(a, 5) << endl;
    cout << gettingWood(a, 6) << endl;
    cout << gettingWood(a, 1) << endl;
    for (int i = high; i > low; i--)
    {
        if (gettingWood(a, i) >= x)
        {
            cout << i;
            break;
        }
    }

    /*while(high-low>1){
        mid = (high+low) / 2;
        if(gettingWood(a,mid)==x) {cout << mid; break;}
        else if(gettingWood(a,mid)<x) high= mid;
        else low = mid;
    }
    cout << low ;
    */
    return 0;
}
// 4 2 5 1 -> 4(12)
// 3 1 4 -> 5(8)
// 2 3 -> 6(5)
// 7 5 8 4 2 -> 1(26)