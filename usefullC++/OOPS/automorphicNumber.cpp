// https://prepinsta.com/cpp-program/cpp-program-to-check-whether-a-number-is-an-automorphic-number-or-not/

#include <iostream>
using namespace std;
int main()
{
    int a = 7;
    int temp = a * a;
    string atemp;
    while (a >= 1)
    {
        if (a % 10 == temp % 10)
        {
            a = a / 10;
            temp = temp / 10;
        }
        else
        {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}