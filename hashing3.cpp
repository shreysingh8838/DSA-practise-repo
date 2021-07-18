#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    while (t--)
    {
        int n = 5;
        vector<int> a = {1, 2, 3, 4, 5};
        map<pair<int, int>> m;
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = a[i] + a[j];
                int s, c;
                s = sqrt(i + j);
                c = cbrt(i + j);
                if (sum == (s * s) || sum == (c * c * c))
                {
                    m[{a[i], a[j]}]++;
                    for (auto &x : m)
                        cout << x.second << endl;
                }
            }
        }
        cout << m.size() << " " << a.size() << endl;
        +-
    }
    return 0;
}
