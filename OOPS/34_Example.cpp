# include<iostream>
using namespace std;
    
/*program for using virtual function */

class basicCar
{
public:
	virtual void start()
	{
		cout<<"basic car started"<<endl;
	}
};
class advanceCar:public basicCar
{
public:
	void start()
	{
		cout<<"advance car started"<<endl;
	}
};
int main()
{
	basicCar *ptr = new advanceCar();
	ptr->start(); //without virtual written in front of the base class function -> output will be -> Basic car started
    //with virtual written in front of void start => output = advance car started

    //CALLED AS -> RUNTIME POLYMORPHISM -> we need virtual function ; overridiing and base class pointer , derived class object

    //its like standing in front of an advance car and pointing to it and saying that this is a basic car -> while in reality when you start -> an advance car will be running
}