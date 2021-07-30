#include <bits/stdc++.h>
using namespace std;

//BRUTE - FORCE APPROACH
int main()
{
    // Check Whether a number is prime or not
    int n = 999997;
    if (n == 0 || n == 1)
    {
        cout << 0 << "\n";
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << 0 << "\n";
            return 0;
        }
    }
    cout << 1 << "\n";
    return 0;

    //For all prime numbers from 0 - n
    /*
    int n = 99999;
    if (n == 0 || n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 2; i <= n; i++)
    {
        bool yes = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                yes = 1;
                break;
            }
        }
        if (yes == 0)
            cout << i << " ";
    }
    cout << endl;
    */
}
