#include<iostream>
using namespace std;

/*
    friend class -> they can access members of objects of other classes
*/

class Your; // without bracket it just has the declaration there
class My{
    private:
        int a = 10;

        friend Your;
};

class Your{
    public:
        My m;
        void fun(){
            cout<<m.a;
        }
};