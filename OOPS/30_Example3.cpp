# include<iostream>
using namespace std;
    
/*program for base class pointer derived class object*/

class basicCar
{
public:
	void start()
	{
		cout<<"car started"<<endl;
	}
};
class advanceCar:public basicCar
{
public:
	void playmusic()
	{
		cout<<"playing music"<<endl;
	}
};
int main()
{
    /*
        advanceCar a;
        a.start();
        a.playmusic();

        here both the functions are available 

    */

    advanceCar a;
    basicCar *ptr=&a;
    ptr->start();
    //ptr->playmusic(); //error: no member named playmusic in basicCar

    basicCar b;
    // advanceCar *q = &b; ERROR
}