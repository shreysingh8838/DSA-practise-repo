#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// https://www.youtube.com/watch?v=Ru_HhBFV3Xo&list=PL_z_8CaSLPWeYfhtuKHj-9MpYb6XQJ_f2&index=7
int count(int arr[], int n, int x)
{
    // code here
    vector<int> v(2);
    int start = 0, end = n - 1;
    int res = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (x == arr[mid])
        {
            res = mid;
            end = mid - 1;
        }
        else if (x < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    v[0] = res;
    res = -1;
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (x == arr[mid])
        {
            res = mid;
            start = mid + 1;
        }
        else if (x < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    v[1] = res;
    if (v[1] == -1 && v[0] == -1)
        return 0;
    return v[1] - v[0] + 1;
}
int main()
{
    fast;

    return 0;
}