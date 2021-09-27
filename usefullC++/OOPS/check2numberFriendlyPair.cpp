// https://prepinsta.com/cpp-program/cpp-program-to-check-whether-two-numbers-are-friendly-pairamicable-number-or-not/
#include <iostream>
#include <vector>
using namespace std;
vector<int> divisors(int a)
{
    vector<int> av;
    int i = 1;
    while (i < a)
    {
        if (a % i == 0)
        {
            av.push_back(i);
        }
        i++;
    }
    return av;
}
bool checkPair(int a, int b)
{
    vector<int> av = divisors(a);
    vector<int> bv = divisors(b);
    int asum = 0, bsum = 0;
    cout << "Divisors of A : ";
    for (auto it : av)
    {
        cout << it << " ";
        asum += it;
    }
    cout << endl;
    cout << "Divisors of B : ";
    for (auto it : bv)
    {
        cout << it << " ";
        bsum += it;
    }
    cout << endl
         << "sum of divisors of a : " << asum << endl
         << "sum of divisors of b : " << bsum << endl;
    return (asum == b && a == bsum) ? true : false;
}

int main()
{
    int a = 220;
    int b = 224;
    string s = (checkPair(a, b)) ? "true" : "false";
    cout << "Given two numbers are Friendly pairs : " << s;
    return 0;
}