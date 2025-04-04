/*
    Public 
    Private
    Protected

    when you create an object of a class in main() -> you can access only public part(not private or protected)
    and in derived class you can access protected and public (not private)

    in my car -> public , private , protected -> all are allowed -> and i have the power to give few things and deny others
    in your car -> my car old design + new modifications -> you still cant access my private info there
    and to the object created -> only the public part is acessible 
*/

#include<iostream>
using namespace std;

class Base{
    private:
        int a;
    protected:
        int b;
    public:
        int c;

    void funBase(){
        a = 10;
        b = 20;
        c = 30;
    }
};

class Derived : public Base{
    public:
    void funDerived(){
        //a = 1; here a red squigly line is shown which means that the private member from the base class is not accessible here
        //public and private are accessible in derived class
        b = 2;
        c = 3;
    }
};
int main(){
    Base x;
    // x.a = 15; here also error occurs -> private cant be accesssed
    // x.b = 25; here also error occurs -> protected cant be accessed
    x.c = 35;
}

