#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
#define ll long long int
const int mod = 1000000007;

class base{
    public:
    virtual void show(){
        cout << " base " << endl;
    }
    void print ()
    { cout<< "print base class" <<endl; }

};
class child : public base{
    public:
    void show(){
        cout << " child " <<endl ;
    }
    void print ()
    { cout<< "print child class" <<endl; }

};
int main()
{
    fast;
    base *b;
    child c;
    b = &c;
    b->show();
    b->print();
    c.show();
    return 0;
}