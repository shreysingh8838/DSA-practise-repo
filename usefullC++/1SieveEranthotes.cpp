#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll m;
    cin >> m;
    ll n;
    cin >> n;
    //globally we can define the size of array in 10^6 but otherwise the allocated array can only store 10^5 elements
    //here we defined an array of 10^5 elements with value 0
    int prime[100000] = {0};
    //as 1 and 0 are not considered as prime number
    //so we have started our loop from 2 to n
    for (int i = 2; i <= n; i++)
    {
        // here we check that this number is marked "1" as multiple of any previously visited number or not
        // here the criteria is eg 2 we will mark all the multiples of 2 as non prime
        // so if all the multiples of i are marked as 1
        if (prime[i] == 0)
        {
            //here we are traversing all the multiples of the i
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    for (int i = m; i <= n; i++)
    {
        if (prime[i] == 0)
            cout << i << " ";
    }
    return 0;
}