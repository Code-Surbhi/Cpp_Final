#include <iostream>
using namespace std;

/*
    Function Overrriding -> writing them once again
*/

class Parent {
    public:
    void display() {
        cout<<"Display of parent";
    }
};

class Child : public Parent {
    public:
    void display() {
        cout<<"Display of child";
    }
    // this is called as redifining the function os parent class again in child -> when called child class funtion will be displayed 
};

int main(){
    Parent p;
    p.display(); // display of parent
    Child c;
    c.display(); //display of child
    // if the display function in child class did not exist then the output of c.display() would have been "display of parent"
}