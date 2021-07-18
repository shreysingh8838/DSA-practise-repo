#include <bits/stdc++.h>
using namespace std;

//We are giving the greatest common divisor of the two numbers using inclusion-exclusion principle
int GCD(int n, int m)
{
    int r, temp;
    while (m != 0)
    {
        r = n % m;
        n = m;
        m = r;
    }
    return n;
}

int main()
{
    cout << GCD(24, 42);
    return 0;
}