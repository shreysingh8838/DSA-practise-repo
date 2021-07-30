#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

void catchThieve(char a[], int k, int n)
{
    vector<int> countp;
    vector<int> countt;
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'P')
            countp.push_back(i);
        else
            countt.push_back(i);
    }
    int i = 0, j = 0;
    while (i < countp.size() || j < countt.size())
    {
        if (abs(countp[i] - countt[j]) <= k)
        {
            i++;
            j++;
            result++;
        }
        else
        {
            i++;
            j++;
        }
    }
    cout << result;
}
int main()
{
    //  0 1 4
    // 2 3 5
    char a[] = {'T', 'T', 'P', 'P', 'T', 'P'};
    int k = 1;
    int n = sizeof a / sizeof a[0];
    catchThieve(a, k, n);
    return 0;
}