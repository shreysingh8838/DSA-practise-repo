#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> m;
    while (n--)
    {
        string s;
        cin >> s;
        if (!m.count(s))
        {
            m[s] = 0;
            cout << "OK \n";
        }
        else
        {
            m[s]++;
            cout << s << m[s] << "\n";
        }
    }
    return 0;
}