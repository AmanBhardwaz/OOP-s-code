// static word use
/*#include<iostream>
using namespace std;
void fun(){
    int x=0;
    cout<<x<<endl;
    x++;
}

void  fun2(){
    int static y=0; // static makes y static so it not get erase after function call
    cout<<y<<endl;
    y++;
}
int main(){
    fun();    //here after every function call ,stack got free so every times it is printing zero
    fun();
    fun();
    fun2(); 
    fun2();
    fun2();
}*/



/*output:
0
0
0
0
1
2*/

/*static variable

Variable declared as static in a function are created and initialised once for the lifetimeof the program  (in Function)


Static variable in a class are created and intialised once>they are shred by all the objects of the class (in class)*/


// in class 
/*#include<iostream>
using namespace std;
class A{
    public:
    int x=0;
    void incX(){
        x=x+1;
    }
    
};

int main(){
    A obj1;
    cout<<obj1.x<<endl;//0
    obj1.incX();
    cout<<obj1.x<<endl;//1
    A obj2;
    obj2.x=977;
    cout<<obj2.x<<endl;
}*/



//static object

#include<iostream>
using namespace std;
class ABC {
    public:
    ABC(){
        cout<<"constructor\n";
    }
    ~ABC(){
        cout<<"destructor"<<endl;
    }
};
int main(){
    if(true){
        static ABC obj;
    }
    cout<<"end of main function\n"<<endl;
}
// output:
/*constructor
end of main function
destructor*/

/*if static word is not there output:
constructor
destructor
end of main function*/