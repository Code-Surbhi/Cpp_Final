#include<iostream>
using namespace std;

int v = 10; //THIS IS A GLOBAL VARIABLE

void fun()
{
    static int v = 10; //This is a STATIC VARIABLE - but accessible only by a specific function (scope limited hai)
    //Static variable becomes like a global variable - always in the code section but accessible only by fun()
    int a = 5;
    v++;
    a++; //In the output you will see how the value of 6 remains constant even after incrementing because every time fun() is called and then it ends , the whole memory of the function goes away . so it starts new everytime and gets the value of 6.
    cout<<a<<" "<<v<<endl;
}

int main()
{
    fun();
    fun();
    fun();
}

/* 
    WITH STATIC VARIABLE

    void fun(){
        static int s = 10;
        s++;
        cout<<s<<endl;
    }
    int main(){
        fun();
        fun();
    }

    //Output -> 11 , 12

*/

/*
    WITHOUT STATIC VARIABLE -> becomes just like global variable and then scope khatam hone ke baad it dissapears out of the block and if called again starts anew
    
    void fun(){
        int s= 10;
        s++;
        cout<<s<<endl;
    }
    int main(){
        fun();
        fun();
    }
    
    //Output -> 11 , 11
*/