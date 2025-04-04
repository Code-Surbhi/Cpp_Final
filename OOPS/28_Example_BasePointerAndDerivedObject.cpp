# include<iostream>
using namespace std;
    
/*program for base class pointer derived class object*/

class base
{
public:
	void fun1()
	{
		cout<<"fun1 of base"<<endl;
	}
};
class derived:public base
{
public:
	void fun2()
	{
		cout<<"fun2 of derived"<<endl;
	}
};
int main()
{
    /*
        Derived d;
        d.fun1(); -> fun1 of BASE 
        d.fun2(); -> fun2 of DERIVED
    */
	derived d;
	base *ptr=&d; // BASE CLASS POINTER AND DERIVED CLASS OBJECT -> CAN CALL ONLY THOSE FUNCITONS WHICH ARE PRESENT IN BASE CLASS
	ptr->fun1();
	// ptr->fun2(); THIS WILL GIVE ERROR -> that no fun2 is present -> wo base class mai dhoondhega cause pointer usi ka hai -> and nahi milega toh error
	return 0;
}