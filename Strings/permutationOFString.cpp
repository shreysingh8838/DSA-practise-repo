#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
            
        int n1=s1.length();
        int n2=s2.length();
        
        vector<int> string1(26,0);
        vector<int> string2(26,0);
        
        for(int i=0;i<n1;++i){
            string1[s1[i]-'a']++;
        }
        int j=0;
        for(int i=0;i<n2;++i){
            string2[s2[i]-'a']++;
            
             if(i>=n1)
                string2[s2[j++]-'a']--;
            
             if(string1==string2) 
                 return true;
           
        }
        
        return false;
        
    }
};

int main()
{
    fast;
    string s = "abcdxabcde";
    // vector<string> v;
    sort(s.begin(),s.end());
    do{
        if( s == "abcdeabcdx") cout << "yes";
    }while(next_permutation(s.begin(),s.end()));    
    // cout << v.size() << endl << endl;
    // for(auto it : v){
    //     if( it == "abcdeabcdx") cout << "yes";
    // }
    // string s2 = "abcdeabcdx";
    // Solution o;
    // cout << o.checkInclusion(s,s2);
    return 0;
}