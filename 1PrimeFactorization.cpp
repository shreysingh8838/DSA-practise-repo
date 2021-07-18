#include <bits/stdc++.h>
using namespace std;

//link -> https://www.youtube.com/watch?v=nDPo9hsDNvU&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=36&t=26s
//Using Sieve of Eranthotes we are giving all the prime factors of provided number
int main()
{
    int n = 62;
    // ALSO HERE SPF smallest prime factor
    // we have created a spf visited array and mark all its elements as 0
    int spf[1000] = {0};
    // we will assign index values to the values of spf array
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }

    // traverse all the elements from 2 to n
    for (int i = 2; i <= n; i++)
    {
        // if the spf value is same as its index means its been not visited or it is not marked as a multiple of any previous number
        if (spf[i] == i)
        {
            // traverse all the multiples of the i
            for (int j = i * i; j <= n; j += i)
            {
                // and if the smallest prime factor of a number is same the number
                if (spf[j] == j)
                {
                    // so we mark the smallest prime factor as i to jth index as
                    // i is smaller than j
                    spf[j] = i;
                }
            }
        }
    }
    // Now to print all the prime factors of the number we will divide it by it spf value till the number becomes 1
    while (n != 1)
    {
        cout << spf[n] << " ";
        n = n / spf[n];
    }
    cout << "\n";
    return 0;
}
