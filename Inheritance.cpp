//  // inheritance when non parameterized constructor is called
//// when properties and member functions of base class are inheritanced by derived class, we call this inheritance



// #include<iostream>
// #include<string>
// using namespace std;
// class Person{
//     public:
//        string name;
//        int age;
   
//     Person(){
//   cout << "Default constructor called!" << endl;  // base class is called first
//     }
//     ~Person(){
//         cout << "Destructor called!" << endl; // destructor of base class is called afrer derived class destructor
//     }
// };
// class Student : public Person{
//     public:
//  int rollNo;
//  Student(){
//     cout << "Student constructor called!" << endl; // derived class is called after base class
//  }
//     ~Student(){
//         cout << "Student destructor called!" << endl; // destructor of derived class is called first
//     }
//   void getInfo(){
//     cout<< "Name: " << name << endl;
//     cout<< "Age: " << age << endl;
//     cout<< "Roll No: " << rollNo << endl;
//   }
// };
// int main(){
//     Student s1;
//     s1.name = "John Doe";
//     s1.age = 20;
//     s1.rollNo = 101;
//     s1.getInfo();
//     return 0;
// }

// // inheritance when parameterized constructor is called
// #include<iostream>
// #include<string>
// using namespace std;
// class Person{
//     public:
//         string name;
//         int age;
//         Person(string name, int age){
//             this->name = name;
//             this->age = age;
//             cout << "Person constructor called!" << endl; // base class is called first
//         }

// };
// class Student: public Person{
//     public:
//         int rollNo;
//         Student(string name, int age, int rollNo): Person(name, age){ // calling base class constructor
//             this->rollNo = rollNo;
//             cout << "Student constructor called!" << endl; // derived class is called after base class
//         }
        
//         void getInfo(){
//             cout<< "Name: " << name << endl;
//             cout<< "Age: " << age << endl;
//             cout<< "Roll No: " << rollNo << endl;
//         }
// };
// int main(){
//     Student s1("John Doe", 20, 101);
//     s1.getInfo();
//     return 0;
// }


// // types of inheritance
// // 1. Single Inheritance
// // 2. Multiple Inheritance
// // 3. Multilevel Inheritance
// // 4. Hierarchical Inheritance
// // 5. Hybrid Inheritance




// // Single Inheritance
// //defination of single inheritance
// // In single inheritance, a class (derived class) inherits from only one base class. This is the simplest form of inheritance.
// #include <bits/stdc++.h>
// using namespace std;

// class Vehicle {
// public:
//     Vehicle() {
//         cout << "This is a Vehicle"<< endl;
//     }
// };

// // Sub class derived from a single base classes
// class Car : public Vehicle {
// public:
//     Car() {
//         cout << "This Vehicle is Car"<< endl;
//     }
// };

// int main() {
    
//     // Creating object of sub class will
//     // invoke the constructor of base classes
//     Car obj;
//     return 0;
// }
// // Multiple Inheritance
// //defination of multiple inheritance
// // In multiple inheritance, a class (derived class) inherits from more than one base class. This allows the derived class to access members of all base classes.
// #include <bits/stdc++.h>
// using namespace std;
// class Vehicle {
// public:
//     Vehicle() {
//         cout << "This is a Vehicle"<< endl;
//     }
// };
// class Engine {
// public:
//     Engine() {
//         cout << "This is an Engine"<< endl;
//     }
// };
// // Sub class derived from multiple base classes
// class Car : public Vehicle, public Engine {
// public:
//     Car() {
//         cout << "This Vehicle is Car"<< endl;
//     }
// };
// int main() {
    
//     // Creating object of sub class will
//     // invoke the constructor of base classes
//     Car obj;
//     return 0;
// }

// // Multilevel Inheritance
// //defination of multilevel inheritance
// //a derived class is created from another derived class and that derived class can be derived from a base class or any other derived class.

// #include <bits/stdc++.h>
// using namespace std;

// class Vehicle {
// public:
//     Vehicle() {
//         cout << "This is a Vehicle"<< endl;
//     }
// };

// class fourWheeler : public Vehicle {
// public:
//     fourWheeler() {
//         cout << "4 Wheeler Vehicles"<< endl;
//     }
// };

// class Car : public fourWheeler {
// public:
//     Car() {
//         cout << "This 4 Wheeler Vehical is a Car";
//     }
// };

// int main() {
    
//     // Creating object of sub class will
//     // invoke the constructor of base classes.
//     Car obj;
//     return 0;
// }

// // Hierarchical Inheritance
// //defination of hierarchical inheritance
// // In hierarchical inheritance, multiple derived classes inherit from a single base class. This allows the derived classes to share the properties and methods of the base class.

// #include <bits/stdc++.h>
// using namespace std;

// class Vehicle {
// public:
//     Vehicle() {
//         cout << "This is a Vehicle"<< endl;
//     }
// };

// class Car : public Vehicle {
// public:
//     Car() {
//         cout << "This Vehicle is Car"<< endl;
//     }
// };

// class Bus : public Vehicle {
// public:
//     Bus() {
//         cout << "This Vehicle is Bus"<< endl;
//     }
// };

// int main() {
    
//     // Creating object of sub class will
//     // invoke the constructor of base class.
//     Car obj1;
//     Bus obj2;
//     return 0;
// }


// // Hybrid Inheritance
// //defination of hybrid inheritance
// // Hybrid inheritance is a combination of two or more types of inheritance. It can include any combination of single, multiple, multilevel, and hierarchical inheritance.

// #include <bits/stdc++.h>
// using namespace std;

// class Vehicle {
// public:
//     Vehicle() {
//         cout << "This is a Vehicle"<< endl;
//     }
// };

// class Fare {
// public:
//     Fare() {
//         cout << "Fare of Vehicle"<< endl;
//     }
// };

// class Car : public Vehicle {
//   public:
//   Car() {
//       cout << "This Vehical is a Car"<< endl;
//   }
// };

// class Bus : public Vehicle, public Fare {
//   public:
//   Bus() {
//       cout << "This Vehicle is a Bus with Fare";
//   }
// };

// int main() {
    
//     // Creating object of sub class will
//     // invoke the constructor of base class.
//     Bus obj2;
//     return 0;
// }