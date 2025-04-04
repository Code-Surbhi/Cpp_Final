// Abstract class -> if a class has pure virtual function then its called as abstract class
// 1. function of inheritance is reusability (base ki property derive mai use kar sakte hai)

#include<iostream>
using namespace std;

class Base{
    public:
        /*
            void fun1(){
                cout<<"fun1";
            }
            void fun2(){
                cout<<"fun2";
            }
        */
        virtual void fun1() = 0;
        virtual void fun2() = 0;
        //Pure virtual functions -> they give their child class a "must" order to override the functions => it is giving a standard / providing an interface
        //Base class function are only for namesake -> body of the function is not required 
};

class Derived: public Base{
    public:
        void fun2(){
            cout<<"Derived fun";
        }
};

/*
    Abstract class ->
    1. Base b; -> object bana sakte hai -> NO
    2. Base *ptr; -> pointer bana sakte hai -> yes


    Base *p = new Derived();
    p -> fun2();
*/

/*
    Based on this criteria there are 3 types of classes in cpp
    1. A class will have all concrete functions -> no pure virtual functions method -> means every function is implemented
       Base class -> all concrete -> reusability

            class Base{
                public:
                    void fun1(){
                        cout<<"Fun1 of base";
                    }
                    void fun2(){
                        cout<<"Fun2 of base";
                    }
            };



    2. Base class (some concrete some pure virtual) -> reusability and polymorphism

            class Base{
                public:
                    void fun1(){
                        cout<<"Fun1 of base";
                    }
                    virtual void fun2() = 0;
            };

            class Derived: public Base{
                public:
                    void fun2(){
                        cout<<"Fun2 of derived";
                    }
            };


    3. Base class: called as interface (all pure virtual program) -> POLYMORPHISM

            class Base{
                public:
                    virtual void fun1() = 0;
                    virtual void fun2() = 0;
            };

            class Derived: public Base{
                public:
                    void fun1(){
                        cout<<"Fun1 of derived";
                    }
                    void fun2(){
                        cout<<"Fun2 of derived";
                    }
            };

    
    

Here 2nd and 3rd types are called as ABSTRACT CLASSES
*/

/*
    class Car{
        public:
            virtual void start() = 0;
    };
    class Derived: public car{

    };

    An abstract class cant make an object of car class -> but pointer can be made yes
    Purpose of abstract class here is to make derived classes compulsary to override function -> if they dont -> derived classes are not allowed to make objects also.
*/
int main(){

}