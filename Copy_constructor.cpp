// copy constructor with shallow copy
// #include<iostream>
// using namespace std;
// class Person{
//  int age;
//  public:
//  Person(){
//     // cout<<"hi"<<endl;
//  }
//  Person(int age){
//     this->age=age;
    
// //   cout<<"Your age is "<<age<<endl;
//  }
//  void display(){
//     cout<<"Your age is "<<age<<endl;
//  }

// };
// int main(){
//     Person p1(25); 
//     // first way
//     Person p2(p1); // Calls copy constructor
//    // second way
//    Person p3;
//     p3=p1; // Calls assignment operator (not copy constructor)
//     // third way
//     Person p4 = p1; // Calls copy constructor
    
//    p1.display();
//     p2.display();
//     p3.display();
//     p4.display();

// }

// manual copy constructor
// #include<iostream>
// using namespace std;
// class Person{
// int age;
// public:
// Person(){

// }
// Person(int age){
//     this->age = age;
// }
// void display(){
//     cout << "Your age is " << age << endl;
// }
// Person(Person &p) {
//     cout << "Copy constructor called!" << endl;
//     age=p.age; // Manual copy of age
//     cout << "Age copied: " << age << endl;
// }
// };
// int main(){
//     Person p1(25);
//     Person p2(p1); // Calls copy constructor

// }



#include<iostream>
#include<cstring>
using namespace std;


class JoinName{
    char *name;
    public:
        JoinName(const char *str){
            name = new char[20];
            strcpy(name, str);
        } 

        //Copy COnstructor  // ye nahin hoga toh shallow copy hoga
        JoinName(const JoinName &str){
            name = new char[20]; //dynamic allocation
            strcpy(name, str.name);
        }

        void concatenate(const char*str){
            strcat(name, str);
        }
        ~JoinName(){ // destructor deletes the dynamically allocated memory
            delete []name;
        }
        void displayName(){
            cout<<"FULL NAME IS : "<<name<<endl;
        }
};

int main(){
    JoinName name1("Peeyush");
    JoinName name2(name1);
      //Copy .. shallow copy

    name1.displayName();
    name2.displayName();
    name1.concatenate(" Misra");
    name1.displayName();
    name2.displayName();
}