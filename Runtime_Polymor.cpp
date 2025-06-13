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
// defination of virtual function
// virtual function is a member function in the base class that you expect to override in derived classes.
#include <iostream>
using namespace std;
class Parent{
    public:
    virtual void getInfo() { // virtual function
        cout << "Parent class show function called." << endl;
    }
};
class Child : public Parent {
    public:
    void getInfo() { // overriding the virtual function
        cout << "Child class show function called." << endl;
    }
};
int main(){
    Child c1;
    c1.getInfo(); // Calls Child class function
}

//virtual function are dynamic in nature
// Defined by the keyboard virtual 
