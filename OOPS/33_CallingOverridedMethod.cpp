#include <iostream>
using namespace std;

class Base{
    public:
        void fun() //virtual void fun()
        { 
            cout<<"fun of base"<<endl;
        }
        // if we write virtual in front of void fun()
};
class Derived : public Base{
    public:
        void fun(){
            cout<<"fun of derived"<<endl;
        }
};

int main(){
    Base *p = new Derived();
    p->fun(); // function is called based in pointer
    // in this case without the virtual function -> function of base class is called 
    // if we write virtual in front of base class fun() -> then derived function is called

    // if we define base class function and override it in derived class -> and if base class function is virtual 
    // Derived d;
    // d.fun();
}