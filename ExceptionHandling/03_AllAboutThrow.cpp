/*
ALL ABOUT THROW
Can we use cout instead of throw ?
If you use cout , User will know the error.
And if you use throw,it will inform the calling function about the error.
Are return and throw same?
can return be written in place of throw?
Return is for returning result.
Throw is for reporting an error.
If you change their roles then roles of Try and Catch will also change.
Can we throw object of class instead of default
constructor ?
Throwing a constructor will create the object and then throw.
Can we throw functions too ?
We can throw int , char , double , string or object of a class.
THROW AND CATCH
Why class 'Myexception' is inheriting from class
'exception' ?
And in which way it should be inherited
(publically,protectedly or privately).
For user defined exception class we have to inherit from exception class
provided by c++.
We can also overrides it’s functionality according to our needs.
You can inherit it in any way.
It is better to do it using public.
Can we replace try,catch,throw by any name??
try,catch,throw are key words.
You cannot change them.
Can we write else in try block ?
Yes ,you can write both if-else in try block.
*/

# include<iostream>
using namespace std;
    
/*program for all about throw*/

class myexception: exception{};

int division(int a,int b)throw(myexception)
{
	if(b==0)
		throw myexception();
	return a/b;
}
int main()
{
	int x=10,y=2,z;
	try
	{
        /*
        if(y==0){
            throw string("Division by zero");
        }
        z=x/y;
        */
        z=division(x,y);
		cout<<z<<endl;
	}
	catch(myexception e)
	{
		cout<<"division by zero"<<endl;
	}
	cout<<"bye"<<endl;
}