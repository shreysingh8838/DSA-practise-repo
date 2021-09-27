#include<iostream>
using namespace std;

class car{
    public :
    int a;
    car(){
        cout << "this car's name is not specified" << endl;
    }
    car(string s){
        cout << "Hey car " << s << endl;
    }
    ~car(){
        cout << "destroyed everything" << endl;
    }
} audi("audi"), nexa("nexa");

int main(){
    car c;
    return 0;
}