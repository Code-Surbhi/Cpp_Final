/*
    specialisation -> top down approach 

    Rectangle  -> exists in real world -> was existing first 
        ^                                       |
        |                                       |
      Cuboid -> exists in real world -> then cuboid was created
*/

/*
    Generalisation -> bottom up approach 
    Purpose is to group them together

    ________Shape____________ (This is just a genaric term (virtual term))
    ^           ^         ^
    |           |         |
    Rectangle   Circle   Triangle   (they exist in real world)
    
*/
#include <iostream>
using namespace std;

/*
    write a class for Employee
    Derived classes
    1. Full time employee with salary
    2. Part time employee with daily wages

    write request methods
*/

class Employee
{
private:
 int eid;
 string name;
public:
 Employee(int e,string n)
 {
 eid=e;
 name=n;
 }
 int getEmployeeID(){return eid;}
 string getName(){return name;}
};
class FulltimeEmployee:public Employee
{
private:
 int salary;
public:
 FulltimeEmployee(int e,string n,int sal):Employee(e,n)
 {
 salary=sal;
 }
 int getSalary(){return salary;}
};
class ParttimeEmployee: public Employee
{
private:
 int wage;
public:
 ParttimeEmployee(int e,string n,int w):Employee(e,n)
 {
 wage=w;
 }
 int getWage(){return wage;}
};
int main()
{
 ParttimeEmployee p1(1,"John",300);
 FulltimeEmployee p2(2,"Raj",5000);

 cout<<"Salary of "<<p2.getName()<<" is "<<p2.getSalary()<<endl;
 cout<<"Daily wage of "<<p1.getName()<<" is "<<p1.getWage()<<endl;


}