/*
    Friend Function-> global function , outside function , which can access all the members of a class upon object , not directly
    If object is there than it can access private also protected also and public also
*/
#include <iostream>
using namespace std;

class Test{
    private :
        int a;
    protected :
        int b;
    public :
        int c;
    
    friend void fun();
};

void fun(){
    Test t;
    t.a = 10; //-> cant access if friend function is not present
    t.b = 20; //-> cant access if friend function is not present 
    t.c = 30;
    //Here we can access only the public function -> but by making a friend function we can access them all
}