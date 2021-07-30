#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

//ALGO
// store the value of every character in the map (not contain duplicate values)
// iterate through the string
// condition : if the current indexed char has greater value than the next indexed char -> then we will add the value to the sum
// else  the current indexed char has lower value than the next indexed char -> then we will subtract the value from the sum
class Solution
{
public:
    int romanToInt(string s)
    {
        int res = 0;
        map<char, int> arr;
        arr['I'] = 1;
        arr['V'] = 5;
        arr['X'] = 10;
        arr['L'] = 50;
        arr['C'] = 100;
        arr['D'] = 500;
        arr['M'] = 1000;
        for (int i = 0; i < s.length(); i++)
        {
            if (i + 1 == s.length() || arr[s[i + 1]] <= arr[s[i]])
            {
                res += arr[s[i]];
            }
            else
            {
                res -= arr[s[i]];
            }
        }
        return res;
    }
};
int main()
{
    fast;

    return 0;
}