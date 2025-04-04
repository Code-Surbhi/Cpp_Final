#include <iostream>
using namespace std;

class Base{
    public:
        void fun1();
        void fun2();
        void fun3();
};

class Derived : public Base{
    public:
        void fun4();
        void fun5();
};

int main(){
    /*
    Derived b;
    b.fun1();
    b.fun2();
    b.fun3();
    b.fun4();
    b.fun5();
    */

    // WHEN WE HAVE A POINTER OF BASE CLASS -> we can call only those functions which are present in base class and not of derived class

    Base *p;
    p = new Derived();
    p -> fun1();
    p -> fun2();
    p -> fun3();
    // In dono main error ayega because pointer is base class ; in such cases we can call functions that are present in base class only because pointer is in base class
    //p -> fun4();
    //p -> fun5();

    /*  Derived class pointer and base class object
        Derived *p;
        p = new Base();

        we CANT call the basic class from an advanced class
    */
}