#include<iostream>
using namespace std;

/*
//Eg 1:

class Outer{
    public:
        void fun(){
            i.display();
        }

    class Inner{ // here inner is a public class of outer
        public:
        void display(){
            cout<<"Display of Inner class"<<endl;
        }
    };

    Inner i;
    // we can use object above (as done in void fun()) but cant create an object as class neeche bani hai
};

int main(){
    Outer::Inner i;
    // we can access it like this also
}

*/

//Eg 2:

class Outer{
    class Inner{
        public:
            void display(){
                cout<<"Display of Inner class"<<endl;
            }
    };
    //This inner class is private

    public:
        Inner i;
        void fun(){
            i.display();
        }
};

int main(){
    // Outer::Inner i; ->ERROR
    // We cant access it like this
}
