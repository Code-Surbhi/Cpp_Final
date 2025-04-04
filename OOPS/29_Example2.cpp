# include<iostream>
using namespace std;
    
/*program for base class pointer derived class object*/
class rectangle
{
public:
	void area()
	{
		cout<<"area of rectangle"<<endl;
	}
};
class cuboid:public rectangle
{
public:
	void volume()
	{
		cout<<"cuboid volume"<<endl;
	}
};
int main()
{
    /*
        cuboid c;
        c.area(); -> area of rectangle 
        c.volume(); -> cuboid volume 
    */

    cuboid c;
    rectangle *p = &c; // cuboid is created here and the line "rectangle *p" keh rhi hai ki wo rectangle hai -> technically not wrong 
    p-> area();
    // p-> volume(); ERROR -> no member named 'VOLUME' in rectangle     
	
    rectangle r;
    // cuboid *q = &r ; THIS WILL ALSO GIVE ERROR -> cant initialise a variable type cuboid with the name of rectangle 
    //&r -> rectangle is created but ye usko cuboid keh raha hai
}