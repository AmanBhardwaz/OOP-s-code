// #include<iostream>
// #include<string>
// using namespace std;

// class Teacher {
//     string name;
//     int age;
//     double salary;
// public:  
//     // Setter method for salary
//     void setSalary(double newSalary) { 
//         salary = newSalary; 
//     }
    
//     // Getter method for salary
//     double getSalary()  { 
//         return salary; 
//     }
// };

// int main() {
//     Teacher t1;
    
//     // Using setter method to update salary
//     t1.setSalary(50000);
    
//     // Using getter method to access salary
//     cout << "Salary: " << t1.getSalary() << endl;

//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;
class Teacher{
    private:
    int phone=71872;
public:
    string name;
    string dept;
    string subject;
    double salary;
void changeDept(string newDept) {
        dept = newDept;
    }
    // int getPhone() {
    //     return phone;
    // }
    //setter method for phone
    void setPhone(int newPhone) {
        phone = newPhone;
    }
    //getter method for phone
    int getPhone() {
        return phone;
    }
};
int main(){
    Teacher t1;
    t1.name = "John Doe"; 
    t1.dept = "Mathematics";
    cout << "Before change: " << t1.dept << endl;
    t1.changeDept("Physics");
    cout << "After change: " << t1.dept << endl;

    // t1.getPhone();
    // cout << "Phone: " << t1.getPhone() << endl;
    t1.setPhone(12345);
    cout << "Phone: " << t1.getPhone() << endl;
    return 0;
    
    
}