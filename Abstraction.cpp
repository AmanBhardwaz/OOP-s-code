// abstraction: Hiding all unnecessary details from the user.

// private: when we want to hide the data members and member functions from the user.
// protected: when we want to hide the data members and member functions from the user but allow access to the derived classes.
// public: when we want to allow access to the data members and member functions from the user.

 // abstraction using abstract classes
 // abstract classes are used to provide a base class from which other classes can be derived

 //they cannot be instantiated and are meant to be inherited by other classes.

 // abstract classes are typically used to define an interface for derived classes
// #include <iostream>
// using namespace std;
// class Shape{
    
//     virtual void draw(){
//         cout<<"virtal class"<<endl;
//     }

// };
// class Circle:public Shape{
//     public:
//     void draw(){
//         cout<<"drwaing a circle"<<endl;
//     }
// };
// int main(){
//     Circle c1;
//     c1.draw();
    
// }
   

