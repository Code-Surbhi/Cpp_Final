/*
ALL ABOUT CATCH
Can we catch exception for the class object like
this ?
catch(MyException e)
{
cout<< e << endl;
}
Don’t display it directly,Call what function.
cout<<e->what();
what() should return a string message as below :
string what()
{
Return “Exception caught”;
}
why is it necessary to write catch block for derived
class first and then for the base class?
if we have base class named "Vehicle" and derived class "Car" for
exceptions.
if an exception of class "Car" is thrown and the catch block is for "Vehicle"
then it will catch the exception of "Car" coz it is also a "Vehicle"
Hence you must always write the catch block of derived class first.
So if there’s any exception for derived class,the catch block of derived
class will catch the exception first. 
*/

/*
    We can have multiple catch blocks
    try{}
    catch(int e){}
    catch(float e){}
    catch(...){} -> catch all types of exceptions

    //catch(...) -> must be written at last (1st pe saare wahi chale jayenge)  
*/

/*  Nested try catch block

    try{
        -----
        -----
        try{----}
        catch(--){---}
    }
    catch{
        -----
        -----
    }
*/

# include<iostream>
using namespace std;
    
/*
    class myexception1: exception {};
    class myexception2:public my exception1 {};

    try{---}
    catch(myexception2 e){----}
    catch(myexception1 e){----}

    When classes in Inheritance -> firstly child class exception block must be there -> then parent class's
*/

/*
    int main(){
        try{
            throw 1;

            //if 1.5 -> int e cant catch double -> hence error
        }

        catch(int e){
            cout<<"int catch"<<endl;
        }

        // catch(double e){
        //     cout<<"double catch"<<endl;
        // }
        
        catch(...){
            cout<<"All catch"<<endl;
        }
        //All catch must come at last 
    }
*/


class myexception1{};
class myexception2:public myexception1{};
int main()
{
	try
	{
		throw myexception1();
	}
	catch(myexception2 e)
	{
		cout<<"int catch"<<endl;
	}
	catch(myexception1 e)
	{
		cout<<"double catch"<<endl;
	}
	catch(...)
	{
		cout<<"all catch"<<endl;
	}
}