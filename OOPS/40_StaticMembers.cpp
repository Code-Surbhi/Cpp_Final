/*

*/
#include <iostream>
using namespace std;

class Test{
    private:
        int a;
        int b;
    public:
        static int count;
        //when you declare static members in the class , that data member must be declared outside the class again using scope resolution

        Test(){
            a=10;
            b=10;
            count++;
        }
};

int Test::count=0; // making it accessible only to the objects inside the class
//only one copy and all the objects share it -> ismai increment decrement jo hoyega wo saare object share krenge

int main()
{
    Test t1,t2;
    cout<<t1.count; //2
    cout<<t2.count; //2
    cout<<Test::count; //2
} 