#include <bits/stdc++.h>
using namespace std;

//Using Brute force we are giving all the prime factors of provided number

int minimumDivisor(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}

int main()
{
    int n = 456;

    while (n != 1)
    {
        int s = minimumDivisor(n);
        cout << s << " ";
        n = n / s;
    }
    cout << "\n";
    return 0;
}