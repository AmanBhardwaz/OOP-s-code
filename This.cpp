// a show showing error due to missing of this
#include <iostream>
using namespace std;
class Person{
    int age;
    public:
    // void setAge(int age) {
    //     age = age; // This will cause an error because 'age' is not defined in this scope
    // }
    // Corrected version
    void setAge(int age) {
        this->age = age; // Using 'this' to refer to the member variable
    }
    void displayAge() {
        cout << "Age: " << age << endl; // This will also cause an error because 'age' is not initialized
    }
};
int main() {
    Person p;
    p.setAge(25); 
    p.displayAge(); // This will display an uninitialized value
    return 0;
}