#include<iostream>
using namespace std;

/*
    normally we write in code -> x = fun()
    matlab jo bhi fun() ki value hogi wo hum x mai save krenge

    but
    return by referance se hum function ko left hand side of assignment operator bhi lekar aa sakte hai
*/

int & fun(int &x){
    //humne idhar x ko as a referance use kra hai, and jo changes x mai honge a mai reflect karenge
    cout<<x<<endl;
    return x;
    //return karne ke time hum jo value function ko denge wo as a whole poore function ko uss variable mai convert kar dega because in here we are simply just returning a value and not operating on anything
    //hence the whole function acts as a referance of a.
}

int main(){
    int a = 10;
    fun(a)=25;
    cout << a << endl;
}