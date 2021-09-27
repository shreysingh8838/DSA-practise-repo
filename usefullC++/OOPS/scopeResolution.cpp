#include <iostream>
using namespace std;
// To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:

// class Myclass{
//     public:
//         void show ();
// };
// void Myclass :: show(){
//     cout << "Show this";
// }
// int main(){
//     Myclass c;
//     c.show();
//     return 0;
// }
class MyClass
{       // The class
public: // Access specifier
  void myMethod()
  { // Method/function defined inside the class
    cout << "Hello World!";
  }
};

int main()
{
  MyClass *myObj = new MyClass(); // Create an object of MyClass
  myObj->myMethod();              // Call the method
  return 0;
}