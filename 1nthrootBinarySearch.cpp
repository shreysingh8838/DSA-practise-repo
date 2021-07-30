#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;
//link -> https://www.youtube.com/watch?v=5snE6xsyheE
//for finding the nth root of any x number
// time complexity -> n*log(x*(10^eps))
//this function is to multiply any number nth time as we want the nth root
double multiply(int mid, int n)
{
    double ans = 1;
    for (int i = 0; i < n; i++)
    {
        ans *= mid;
    }
    return ans;
}

//eps is meant for epsilon which is used here for the precesion of how much decimal value we want our root should be calculated
// eg here it is 10^(-6), so its for 6 decimal places -> sq root of 2 is 1.414
double eps = 1e-6;
int main()
{
    // x is for the number and n is for the nth root
    double x = 5;
    int n = 2;
    //we defined the range of any root from 1 till the exact ndumber
    double low = 1, high = x, mid;

    // in normal binary search we used this condition as high - low -> which means till high is greater than low in 1
    // but here we marking that presicison should be considered till the eps (eps'th decimal values)
    while (high - low > eps)
    {
        // normal binary search criteria
        mid = (high + low) / 2;
        // here instead of marking mid we have calculated the n times multiply of the mid which should be equal to x as we are finding nth root
        if (multiply(mid, n) < x)
            low = mid; // if n times mid is getting smaller than x than we will reduce the range to low(now low = mid) - high
        // if n times mid is getting greater than x than we will reduce the range to low - mid(now high = mid)
        else
            high = mid;
    }
    // atlast we will print the desired output as if n times low is equal to x than
    //as low and high are equal so we can print any one
    cout << low << endl;
    return 0;
}