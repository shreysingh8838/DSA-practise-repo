// https://prepinsta.com/cpp-program/cpp-program-to-check-whether-a-number-is-a-harshad-number-or-not/
#include <iostream>
using namespace std;
int main()
{
    int num = 153;
    int temp = num;
    int sum = 0;
    while (temp > 0)
    {
        sum += temp % 10;
        temp = temp / 10;
    }
    if (num % sum == 0)
        cout << "yes";
    else
        cout << "no";
    return 0;
}