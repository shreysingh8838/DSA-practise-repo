#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;


class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        //intitalise the output vector
        vector<string> ans;
        // create a hashmap to store the char of a string with its occurance
        map<char,int> mp;
        
        //store the elements of first string from the words (which is vector of strings)
        //and on the occurance of the element its value will increment which is showing that its count increased
       for(int i=0;i<words[0].size();i++){
           mp[words[0][i]] += 1;
       }

        
        // traverse all the strings of the given vector
        for(int i=1;i<words.size();i++){

            // create a temp hashmap to store the strings temprarily as the strings are traversed
            map<char,int>  mp1;
            
            // similarily increaement the value on the occurance of every character in that i'th string
            for(int j=0;j<words[i].size();j++){
                mp1[words[i][j]] += 1;
            }
            
            // Now using iterator on the primary hashmap
            for(auto x: mp){
                // x is representing the char of the 1st string
                
                // we will check whether the char of 1st string is common on the traversed string
                if(mp1.find(x.first)!=mp.end()){
                    
                    // mp1[x.first] this will give the count of common element from 1st hashmap in the 2nd hashmap 
                    // the condition is checking if the occurance of any character is not same in both the hashmap's (or strings)
                    if(mp1[x.first]!=x.second){
                        
                        // since the occurance is not same so we will update the count of that character in our primary hashmap as the minimum count between both the hashmaps
                        mp[x.first]=min(x.second, mp1[x.first]);

                        // x.second will give the count of that character in primary hashmap
                        // mp1[x.first] will give the count of that same character in temporary hashmap
                    }
                }
                else{
                    // if the any character in the first hashmap which is not common in the temp hashmap will be removed from the primary hashmap
                    // mp.find(x.first) will give the address of the x.first character in the first hashmap and 
                    // mp.erase() will input a location and will erase it from the primary hashmap
                     mp.erase(mp.find(x.first));
                }
            }
        }

            // now we will add all the characters of the primary hashmap into the resultant vector
            for(auto x: mp){

                // all characters will added on the basis of their counts
                while(x.second--){

                    // this function will create a string of the character x.first
                    // since the resultant function is taking the output of string vector not a character vector
                    string s(1, x.first);
                    ans.push_back(s);
                }
                
            }
            
           return ans;
    }
};
int main()
{
    fast;

    return 0;
}