#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;
class Solution{
    void func(int index, string s, vector<string> &path,vector<vector<string>> &result){
        if(index == s.size()){
            result.push_back(path);
            return;
        }
        
    }
    public:
    vector<vector<string>> partition(string s){
        vector<vector<string>> result;
        vector<string> path;
        func(0,s,path,result);
        return result;
    }
}
int main()
{
    fast;
    string s = "aab";
    vector<vector<string>> p = partition(s);
    return 0;
}