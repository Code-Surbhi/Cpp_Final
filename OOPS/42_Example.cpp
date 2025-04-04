#include <iostream>
using namespace std;

/*
//Eg 1

class Innova{
    public:
        static int price;
        Innova();
        static int getPrice(){
            return price;
        }
};

int Innova::price = 20;

int main(){
    cout<<Innova::getPrice();
    Innova my;
    cout<<my.getPrice();
}
*/

/*
//Eg 2

class Student{
    public:
        int rollNo;
        static int addminNo;
        Student(){
            addminNo ++;
            rollNo = addminNo;
        }
};
int Student::addminNo = 0;
int main(){
    Student s1,s2;
}

//addminNo box = 0 -> 1
// S1 box -> rollNo = 1
//addminNo box = 1 -> 2
// S2 box -> rollNo = 2
*/


//Eg 3

class Student{
    public:
        int roll;
        string name;
        static int addNo;
        Student(string n){
            addNo++;
            roll=addNo;
            name=n;
        }
        void display(){
            cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;
        }
};

int Student::addNo=0;

int main()
{
    Student s1("John");
    Student s2("Ravi");
    Student s3("Khan");
    Student s4("Khan");
    Student s5("Khan");
    Student s6("Khan");

    s1.display();
    s6.display();
    cout<<"Number Admission "<<Student::addNo<<endl;
} 
