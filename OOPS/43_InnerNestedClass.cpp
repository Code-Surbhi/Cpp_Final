#include<iostream>
using namespace std;

class Outer{
    public:
        int a = 10; //1.
        static int b; //2.
        void fun(){
            i.show();
            cout<<i.x;
            //we can use only those objects here which are public
        }

        class Inner{
            public:
                int x = 25;
                void show(){
                    // cout<<"Show"<<a<<endl; -> Show a mai error ayega
                    cout<<"Show"<<b<<endl; // we can print this
                }
        };
        //Inner class can access the members of outer class if its static

        Inner i; //3.
};
int Outer:: b = 20;

/*
Class linked list -> class mode (nested classes)
*/
