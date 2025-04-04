#include <iostream>
using namespace std;

/*
    if we use local variables in a function , they end after the function ends. so as to return the address of the variables made in funtion they have to be made in heap.
    we cant do

    int * fun(){
    int x=10;
    return &x; //& se hum address return krenge toh wo int * fun() wala pointer catch krega and then return karega 
    }

    but this cant happen since when the function will end , x will dissapear as its scope will end
*/

int * fun(){
    int *p = new int[5];
    for(int i=0;i<5;i++){
        p[i]=i+1;
    }
    cout<<p<<endl;
    //isse hamara p variable jo heap mai bana hai uska address print hoga
    return p; //hum jab p ka address return krenge toh wo int * fun() wala pointer catch krega and main function ko dega
}

int main(){
    int *q = fun(); // fun() ko access krne par wo q name ke pointer mai save hoga -> jo bhi value return hogi wo q name ke pointer mai save hogi
    cout<<q<<endl; // with this line hum ye dekh sakte hai ki -> q or p ka address same hai -> means ki same variable hum access kar sakte hai
    for(int i=0;i<5;i++){
        cout<<q[i]<<endl;
    }
}