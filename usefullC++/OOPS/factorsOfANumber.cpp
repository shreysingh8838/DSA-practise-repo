#include <iostream>
#include <vector>
using namespace std;
vector<int> factors(int a)
{
    vector<int> av;
    int i = 2;
    while (a != 1)
    {
        while (a % i == 0)
        {
            av.push_back(i);
            a = a / i;
        }
        i++;
    }
    return av;
}
int main()
{
    int a = 22250;
    vector<int> av = factors(a);
    for (auto it : av)
    {
        cout << it << " ";
    }
    return 0;
}