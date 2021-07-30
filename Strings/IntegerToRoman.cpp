#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

// Iterative Approach
// ALGO
// Store the digits in the vector
// and then reverse the vector becoz to start the num from the greater level digits (thousands > hundreds > tens > ones)
// then iteratively assign each character to every digit according to its place
class Solution1
{
public:
    string intToRoman(int num)
    {
        vector<int> a;
        string s;
        while (num != 0)
        {
            a.push_back(num % 10);
            num /= 10;
        }
        reverse(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++)
        {
            if (i == a.size() - 4)
            {
                if (a[i] == 1)
                    s += "M";
                else if (a[i] == 2)
                    s += "MM";
                else if (a[i] == 3)
                    s += "MMM";
            }
            else if (i == a.size() - 3)
            {
                if (a[i] == 1)
                    s += "C";
                else if (a[i] == 2)
                    s += "CC";
                else if (a[i] == 3)
                    s += "CCC";
                else if (a[i] == 4)
                    s += "CD";
                else if (a[i] == 5)
                    s += "D";
                else if (a[i] == 6)
                    s += "DC";
                else if (a[i] == 7)
                    s += "DCC";
                else if (a[i] == 8)
                    s += "DCCC";
                else if (a[i] == 9)
                    s += "CM";
            }
            else if (i == a.size() - 2)
            {
                if (a[i] == 1)
                    s += "X";
                else if (a[i] == 2)
                    s += "XX";
                else if (a[i] == 3)
                    s += "XXX";
                else if (a[i] == 4)
                    s += "XL";
                else if (a[i] == 5)
                    s += "L";
                else if (a[i] == 6)
                    s += "LX";
                else if (a[i] == 7)
                    s += "LXX";
                else if (a[i] == 8)
                    s += "LXXX";
                else if (a[i] == 9)
                    s += "XC";
            }
            else if (i == a.size() - 1)
            {
                if (a[i] == 1)
                    s += "I";
                else if (a[i] == 2)
                    s += "II";
                else if (a[i] == 3)
                    s += "III";
                else if (a[i] == 4)
                    s += "IV";
                else if (a[i] == 5)
                    s += "V";
                else if (a[i] == 6)
                    s += "VI";
                else if (a[i] == 7)
                    s += "VII";
                else if (a[i] == 8)
                    s += "VIII";
                else if (a[i] == 9)
                    s += "IX";
            }
        }
        return s;
    }
};

//Recursive Approach
class Solution
{
private:
    void convert(int num, string &romanStr)
    {
        if (num >= 1000)
        {
            romanStr += "M";
            return convert(num - 1000, romanStr);
        }
        else if (num >= 900)
        {
            romanStr += "CM";
            return convert(num - 900, romanStr);
        }
        else if (num >= 500)
        {
            romanStr += "D";
            return convert(num - 500, romanStr);
        }
        else if (num >= 400)
        {
            romanStr += "CD";
            return convert(num - 400, romanStr);
        }
        else if (num >= 100)
        {
            romanStr += "C";
            return convert(num - 100, romanStr);
        }
        else if (num >= 90)
        {
            romanStr += "XC";
            return convert(num - 90, romanStr);
        }
        else if (num >= 50)
        {
            romanStr += "L";
            return convert(num - 50, romanStr);
        }
        else if (num >= 40)
        {
            romanStr += "XL";
            return convert(num - 40, romanStr);
        }
        else if (num >= 10)
        {
            romanStr += "X";
            return convert(num - 10, romanStr);
        }
        else if (num >= 9)
        {
            romanStr += "IX";
            return convert(num - 9, romanStr);
        }
        else if (num >= 5)
        {
            romanStr += "V";
            return convert(num - 5, romanStr);
        }
        else if (num >= 4)
        {
            romanStr += "IV";
            return convert(num - 4, romanStr);
        }
        else if (num >= 1)
        {
            romanStr += "I";
            return convert(num - 1, romanStr);
        }
        else
        {
            return;
        }
    }

public:
    string intToRoman(int num)
    {
        string romanStr = "";
        convert(num, romanStr);
        return romanStr;
    }
};
int main()
{
    fast;

    return 0;
}