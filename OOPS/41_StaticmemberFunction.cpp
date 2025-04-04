#include<iostream>
using namespace std;

class Test{
    private:
        int a;
        int b;
    public:
        static int count;

        Test(){
            a = 10;
            b = 10;
            count++;
        }

        static int getCount(){
            // a++; -> gives error as it can only access the static data members of a class
            return count;
        }
};

int Test::count=0;

int main(){
    cout<<Test::getCount(); //0
    Test t;
    cout<<t.getCount();

    //getcount() can be accessed via object (t.getCount();) or a class (Test::getCount();)
}