#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int odd = 0;
        for (char c : s)
            if ((c - '0') % 2 != 0)
                odd++;
        if (odd <= 1)
        {
            cout << "-1\n";
            continue;
        }
        int count = 0;
        for (char c : s)
        {
            if ((c - '0') % 2 != 0)
            {
                cout << c;
                count++;
            }
            if (count == 2)
            {
                cout << "\n";
                break;
            }
        }
        return 0;
    }