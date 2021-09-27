#include <iostream>
using namespace std;
string func(string q){
    string res = "";
    string temp = "";
    int count = 0;
    for(int i=0; i<q.length(); i++){
        if(q[i]==' '){
            temp = "";
            continue;
        }
        else{
            temp += q[i];
        }
        string temp2 = "";
        for(int j = i+1; j<q.length();j++){
            if(q[j]==' '){
                temp2 = "";
                continue;
            }
            else{
                temp2 += q[j];
            }
        }
        if(temp == temp2){
            count++;
            if(count == 1){
                res += temp + " ";
            }
        }
        res += count + " ";
        count = 0;
    }
    return res;
}
int main(){
    string q = "We resolve We resolve";
    cout << func(q);
    return 0;
}