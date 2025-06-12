// polymorphism 
//defination: Polymorphism is a core concept in object-oriented programming that allows objects of different classes to be treated as objects of a common base class. It enables methods to be called on objects without knowing their exact type at compile time, allowing for flexibility and extensibility in code design.
//compile time polymorphism: Compile-time polymorphism, also known as static polymorphism, is achieved through function overloading and operator overloading. It allows the compiler to resolve method calls at compile time based on the method signatures or operator definitions.
// runtime polymorphism: Runtime polymorphism, also known as dynamic polymorphism, is achieved through inheritance and virtual functions. It allows method calls to be resolved at runtime based on the actual object type, enabling more flexible and extensible code design.

/*example of compile time polymorphism : constructor overloading
#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
    string name;
    Student(){
        cout << "Non Parametarized constructor" << endl;
    }
 Student(string name){
    this->name = name;
    cout << "Parametarized constructor" << endl;
 }
};
int main(){
    Student s1;
    Student s2("John");
}*/

/*one more example of compile time polymorphism: function overloading
three types of function overloading:
1. Function overloading by changing the number of parameters
2. Function overloading by changing the type of parameters
3. Function overloading by changing the order of parameters*/
#include <iostream>
#include <string>
using namespace std;
class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, int b) { // type of parameters changed
        return a + b;
    }

    int add(int a, int b, int c) { // no of parameters changed
        return a + b + c;
    }
    double add(int a, double b) { // order of parameters changed, return type fixed
        return a + b;
    }
};
int main() {
    Math math;
    cout << "Sum of 2 and 3: " << math.add(2, 3) << endl; // Calls add(int, int)
    cout << "Sum of 2.5 and 3: " << math.add(2.5, 3) << endl; // Calls add(double, int)
    cout << "Sum of 1, 2 and 3: " << math.add(1, 2, 3) << endl; // Calls add(int, int, int)
    cout << "Sum of 2 and 3.5: " << math.add(2, 3.5) << endl; // Calls add(int, double)
    return 0;
}

