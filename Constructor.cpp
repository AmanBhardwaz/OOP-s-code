// #include<iostream>
// #include<string>
// using namespace std;
// class Person {
// public:
//     Person() {
//         cout << "Constructor called!" << endl;
//     }
// };
// int main(){
//     Person p1;
// }

// Output:
// Constructor called!

// #include<iostream>
// #include<string>
// using namespace std;

// class Person {
// public:
//     string name;  // Declare name as a member variable
    
//     Person() {
//         name = "John Doe"; // Initialize member variable
//     }
// };

// int main() {
//     Person p1;
//     cout << p1.name << endl; // Now it will work correctly
//     return 0;
// }


// overloading by changing the number of parameters
// #include<iostream>
// using namespace std;
// class Person {
// public:
//     Person() {
//         cout << "Default constructor called!" << endl;
//     }
    
//     Person(int age) {
//         cout << "Constructor with one parameter called! Age: " << age << endl;
//     }
    
//     Person(int age, string name) {
//         cout << "Constructor with two parameters called! Age: " << age << ", Name: " << name << endl;
//     }
// };
// int main() {
//     Person p1; // Calls default constructor
//     Person p2(25); // Calls constructor with one parameter
//     Person p3(30, "Alice"); // Calls constructor with two parameters
//     return 0;
// }

// overloading by changing the type of parameters
// #include<iostream>
// using namespace std;
// class Person {
// public:
//     Person() {
//         cout << "Default constructor called!" << endl;
//     }
    
//     Person(int age) {
//         cout << "Constructor with int parameter called! Age: " << age << endl;
//     }
    
//     Person(double height) {
//         cout << "Constructor with double parameter called! Height: " << height << endl;
//     }
// };
// int main() {
//     Person p1; // Calls default constructor
//     Person p2(25); // Calls constructor with int parameter
//     Person p3(5.9); // Calls constructor with double parameter
//     return 0;
// }

// overloading by changing the order of parameters
// #include<iostream>
// using namespace std;
// class Person {
// public:
//     Person() {
//         cout << "Default constructor called!" << endl;
//     }
    
//     Person(int age, string name) {
//         cout << "Constructor with int and string parameters called! Age: " << age << ", Name: " << name << endl;
//     }
    
//     Person(string name, int age) {
//         cout << "Constructor with string and int parameters called! Name: " << name << ", Age: " << age << endl;
//     }
// };
// int main() {
//     Person p1; // Calls default constructor
//     Person p2(25, "Alice"); // Calls constructor with int and string parameters
//     Person p3("Bob", 30); // Calls constructor with string and int parameters
//     return 0;
// }




// three types of constructors
#include<iostream>
using namespace std;
class Person {
    
public:
    int age;
    string name;

    // Default constructor
    Person() {
        cout << "Default constructor called!" << endl;
        age = 0;
        name = "Unknown";
    }

    // Parameterized constructor
    Person(int a, string n) {
        cout << "Parameterized constructor called! Age: " << a << ", Name: " << n << endl;
        age = a;
        name = n;
    }

    // Copy constructor
    Person( Person &p) {
        cout << "Copy constructor called!" << endl;
        age = p.age;
        name = p.name;
    }
};
int main() {
    Person p1; // Calls default constructor
    Person p2(25, "Alice"); // Calls parameterized constructor
    Person p3(p2); // Calls copy constructor
    Person p4 = p2; // Also calls copy constructor

    cout << "p1 - Age: " << p1.age << ", Name: " << p1.name << endl;
    cout << "p2 - Age: " << p2.age << ", Name: " << p2.name << endl;
    cout << "p3 - Age: " << p3.age << ", Name: " << p3.name << endl;
    cout << "p4 - Age: " << p4.age << ", Name: " << p4.name << endl;

    return 0;
}