#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// UGLY NUMBERS ARE THOSE NUMBERS WHICH CAN ONLY BE FACTORIZED INTO 2,3 AND 5

// using my normal naive approach but giving tle for larger values
// So we got new HEAP solution
// we can also do this using dp
bool isUgly(long long int n)
{
    if (n <= 0)
        return false;
    if (n == 1)
        return true;
    while (n != 1)
    {
        if (n % 2 == 0)
            n /= 2;
        else if (n % 3 == 0)
            n /= 3;
        else if (n % 5 == 0)
            n /= 5;
        else
            return false;
    }
    return true;
}

// Main function
int nthUglyNumber(int n)
{
    long long int counter = 0;
    long long int i = 0;
    while (counter < n)
    {
        if (isUgly(i))
        {
            counter++;
        }
        if (counter == n)
        {
            return i;
        }
        i++;
    }
    return i;
}

// USING HEAP
class Solution
{
public:
    int nthUglyNumber(int n)
    {
        priority_queue<long, vector<long>, greater<long>> pq;
        pq.push(1);
        long long x;
        while (n--)
        {
            if (pq.top() == x)
            {
                pq.pop();
                n++;
                continue;
            }
            x = pq.top();
            pq.push(2 * x);
            pq.push(3 * x);
            pq.push(5 * x);
            pq.pop();
        }
        return x;
    }
};

int main()
{
    fast;
    Solution s;
    cout << nthUglyNumber(62);
    return 0;
}