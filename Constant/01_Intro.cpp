#include <iostream>
using namespace std;

// # define x 10
//This will not take part of memory -> it is outside compiler (not a part of code)
//If we have constant that are globally used in the project use this one

/* 1.)

int main(){
    const int x = 10;    //this wont modify now 

    //This will take part of memory -> and this is a part of language (part of compiler)
    //inside /function /class -> if you have any constrains use this one

    x++;
    cout<<x;
}
*/

/* 2.)

x box -> value = 10 , address = 200/201
ptr box -> points to the x box = 300/301

int main(){
    int x = 10;
    const int *ptr = &x;
    //constant used 
    ++*ptr;
    //this we cant perform now 
    cout<<x;
    //can read the value but cant modify
}
*/

/* 3.)

int main(){
    int x = 10;
    int * const *ptr = &x;
    //data / int is not const -> the ptr is constant => now it cant be pointing to any other data
    int y = 20;
    ptr = &y;
    //it can point on some other data but cant change the value
    ++(*ptr);
}

x box -> value = 10 , address 300
y box -> value = 20 , address 400

ptr box -> 300 (no) -> 400 (yes) 
*/

/* 4.)

Constant pointer to integer constant (pointer bhi change nahi hoga -> naa hi value change hogi)

3 types of constant properties ->
1.) Pointer can be const ; pointer cant be modified
2.) Data can be const ; pointer cant modify data
3.) Or both can be const

*/

class Demo{
    public:
        int x = 10;
        int y = 20;
        void display() const{
            // x++; //-> this cant happen -> it wont change its data member ki value 
            cout<<x<<" "<<y<<endl;
        }
};

int main(){
    Demo d;
    d.display(); //11 20
}
