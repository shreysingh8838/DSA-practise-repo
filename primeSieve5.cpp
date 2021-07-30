#include <bits/stdc++.h>
using namespace std;

bool doesExist(int n)
{
    while (n % 2 == 0)
    {
        return 1;
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            return 1;
            n = n / i;
        }
    }
    return 0;
}

int main()
{
    int n = 8;
    vector<int> v(n);
    vector<int> v1(n, 1);
    set<int> s;
    for (int i = 0; i < n + 1; i++)
    {
        v[i] = i + 2;
    }

    for (int i = 2; i < n; i++)
    {
        if (doesExist(v[i]))
        {
            v1[i] = 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        s.insert(v1[i]);
    }
    cout << s.size() << endl;
    for (auto x : v1)
        cout << x << " ";
    cout << endl;
    return 0;
}