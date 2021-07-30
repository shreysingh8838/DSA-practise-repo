#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 1000000007;

class solution
{
public:
    void parenthesis(string str, int n, int open, int close, vector<string> &result)
    {
        if (close == n)
        {
            result.push_back((string)str);
            return;
        }
        else
        {
            if (open < n)
                parenthesis(str + '(', n, open + 1, close, result);
            if (open > close)
                parenthesis(str + ')', n, open, close + 1, result);
        }
    }
    vector<string> all_Parenthesis(int n)
    {
        vector<string> result;
        if (n > 0)
            parenthesis("", n, 0, 0, result);
        return result;
    }
};
int main()
{
    return 0;
}