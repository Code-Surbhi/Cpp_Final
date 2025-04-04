# include<iostream>
using namespace std;
    
/*program for operator overloading using friend functions

*/
class complex
{
private:
	int real;
	int img;
public:
	complex(int r=0,int i=0)
	{
	      real=r;
	      img=i;
	}
	void display()
	{
		cout<<real<<"+i"<<img<<endl;
	}
	friend ostream & operator<<(ostream &out,complex &c);
};
ostream & operator<<(ostream &out,complex &c)
{
	out<<c.real<<"+i"<<c.img<<endl;
	return out;
}
int main()
{
    /*
    if we write 
    x = 10;
    cout<<x;
    we get the value of x but what if we want the value of complex number like with just cout and not a display method , then we use this method.
    */
	complex c(10,5);
	cout<<c;
	operator<<(cout,c);
}