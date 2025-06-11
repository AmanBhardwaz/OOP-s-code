  // inheritance when non parameterized constructor is called
// when properties and member functions of base class are inheritanced by derived class, we call this inheritance
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

// inheritance when parameterized constructor is called
#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
        string name;
        int age;
        Person(string name, int age){
            this->name = name;
            this->age = age;
            cout << "Person constructor called!" << endl; // base class is called first
        }

};
class Student: public Person{
    public:
        int rollNo;
        Student(string name, int age, int rollNo): Person(name, age){ // calling base class constructor
            this->rollNo = rollNo;
            cout << "Student constructor called!" << endl; // derived class is called after base class
        }
        
        void getInfo(){
            cout<< "Name: " << name << endl;
            cout<< "Age: " << age << endl;
            cout<< "Roll No: " << rollNo << endl;
        }
};
int main(){
    Student s1("John Doe", 20, 101);
    s1.getInfo();
    return 0;
}