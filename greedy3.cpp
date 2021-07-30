#include <iostream>
#include <vector>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<long long int> v;
        int count = 0;
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
                count++;
                n = n / i;
            }
            if (count == 2)
            {
                if (i != n)
                {
                    v.push_back(n);
                    cout << "YES\n";
                    for (vector<long long int>::iterator it = v.begin(); it != v.end(); it++)
                    {
                        cout << *(it) << " ";
                    }
                    cout << " \n";
                }
                else
                {
                    cout << "N0 \n";
                    break;
                }
            }
        }
    }
    return 0;
}