/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c[1000];
    int maxfreq = 0;
    int freq[1000];
    char ch;
    cin.getline(c, 1000);
    int n = strlen(c);
    for (int i = 0; i < n; i++)
    {
        freq[c[i]]++;
        if (freq[c[i]] > maxfreq)
        {
            maxfreq = freq[c[i]];
            ch = c[i];
        }
        else if (freq[c[i]] == maxfreq && ch > c[i])
        {
            ch = c[i];
        }
    }
    cout << ch << " " << maxfreq;

    return 0;
}