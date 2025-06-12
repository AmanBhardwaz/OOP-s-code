// polymorphism second type is runtime polymorphism (dynamic polymorphism)

// Function Overriding
//Parents and child both have same function name with different implementation

// The parent class function is said to be overridden by the child class function.


/*#include <iostream>
#include <string>
using namespace std;
class Parent {
 public:
    void getInfo() {
        cout << "Parent class show function called." << endl;
    }
};
class Child : public Parent {
 public:
    void getInfo() {
        cout << "Child class show function called." << endl;
    }
};
int main(){
    Child c1;
    c1.getInfo(); // Calls Child class function
    Parent p1;
    p1.getInfo(); // Calls Parent class function
}*/

// Example of runtime polymorphism using virtual functions

//