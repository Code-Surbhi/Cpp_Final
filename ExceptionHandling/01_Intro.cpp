/*
    Error->
        1. Syntax error -> compiler helps in this one
        2. Logical error -> results are different from expected -> Debugger helps here
        3. Runtime error ->
            Reason : 
                1.Bad input (int ki jagah string enter kardi)
                2.Problem with resources (printer not available)
                
            Handling :
                gives message to the user
                tell him about the exact problem
                also provide him guidance to remove the error

    Errors 1 and 2 are faced by the programmer while Error 3 is faced by the user
*/


/*
    try(){
        //code here which is succeptible to cause an error
    }
    catch(){
        //code here for the solution to said error
    }

    if there is an error in try block -> terminates and jumps to catch block
*/
#include<iostream>
using namespace std;

int main() {
    int a = 10 , b = 0, c;
    try{
        if(b==0){
            throw 1;
        }
        c=a/b;
        cout<<c<<endl;
    }
    catch(int e){
        cout<<"Error : Division by zero is not allowed"<<endl;
    }
    cout<<"Bye"; //always displayed weather error is present or not
}
// try and catch is a communication between 2 functions
