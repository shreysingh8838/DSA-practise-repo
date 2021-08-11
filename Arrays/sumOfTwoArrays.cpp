#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// question link : https://hack.codingblocks.com/app/contests/2451/931/problem

vector<int> sumOfArrays(vector<int> a, vector<int> b)
{
    vector<int> res;
    int n = a.size(), m = b.size();
    int i = n - 1, j = m - 1;
    int sum = 0, carry = 0;
    while (i >= 0 && j >= 0)
    {
        sum = a[i] + b[j] + carry;
        if (sum > 9)
        {
            if (i != 0 && j != 0)
            {
                int rem = sum % 10;
                carry = sum / 10;
                res.push_back(rem);
            }
            else
            {
                int rem = sum % 10;
                carry = sum / 10;
                res.push_back(rem);
                res.push_back(carry);
            }
        }
        else
        {
            res.push_back(sum);
            carry = 0;
        }
        i--, j--;
    }
    if (i > j)
    {
        while (i >= 0)
        {
            res.push_back(a[i--]);
        }
    }
    else
    {
        while (j >= 0)
        {
            res.push_back(b[j--]);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    fast;
    vector<int> a = {1, 0, 2, 9};
    vector<int> b = {9, 0, 5, 6};
    vector<int> res = sumOfArrays(a, b);
    for (auto it : res)
    {
        cout << it << " ";
    }
    return 0;
}