#include <iostream>
using namespace std;

int division(int x , int y){
    if(y==0){
        throw 1;
    }
    return x/y;
}

int main(){
    int a = 10 , b =0 , c;
    try{
        cout<<division(a,b);
        cout<<c;
    }
    catch(int e){
        cout<<"Error: Division by zero is not allowed"<<e<<endl;
    }
    cout<<"Bye";
}
