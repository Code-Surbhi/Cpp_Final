#include<iostream>
using namespace std;

class Test{
    public:
        int a;
        int *p;

    Test(int x){
        a=x;
        p = new int[a];
        cout<<"Parameterised Constructor"<<endl;
    }

    Test(Test &t){
        cout<<"Copy constructor"<<endl;
        a=t.a;
        //p=t.p; problem with writing this is that -> in copy constructors if dynamic memory is allocated then -> copy constructors may not create a new memory for it -> it will end up pointing on the same old memory
        //if values are present in the array then we should have a code to copy those values too.
        p = new int[a]; // this will create a new array of t2 and not just point on the arrray of t1.
    }
};

int main(){
    Test t1(10);
    Test t2(t1);
}