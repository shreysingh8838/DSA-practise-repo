// https://prepinsta.com/cpp-program/cpp-program-to-check-whether-a-number-is-a-strong-number-or-not/
#include <iostream>
using namespace std;
int factorial(int num)
{
    int product = 1;
    int i = 1;
    while (i <= num)
    {
        product *= i;
        i++;
    }
    return product;
}
int main()
{
    int a = 145;
    int tempa = a;
    int sum = 0;
    while (a > 0)
    {
        int temp = a % 10;
        a /= 10;
        sum += factorial(temp);
    }
    if (sum == tempa)
        cout << "yes";
    else
        cout << "no";
    return 0;
}