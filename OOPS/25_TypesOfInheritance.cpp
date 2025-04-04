/*
    1. Single / Simple inheritance 
    _________
   |  BASE   |
   |_________|  (rectangle)
        ^
        |     We have an array towards the parent class
    ____|____
   | DERIVED |  (cuboid)
   |_________|

   2. Hierarchial inheritance

    __________________
   |      BASE        |
   |__________________|   (Shape)
        ^         ^
        |         |
    ____|____   __|____
   | DERIVED | |Derived|  (Cirlce , Rectangle)
   |_________| |_______|

   3. Multilevel inheritance
    _________
   | A       |
   |_________|  (Point)
        ^
        |     
    ____|____
   | B       | (Circle)
   |_________|
        ^
        |     
    ____|____
   | C       | (Cylinder)
   |_________|

   4. Multiple inheritance

    _________   _______
   |    A    | |   B   |  
   |_________| |_______| (Phone , Camera)
        ^          ^
    ____|__________|___
   |         C         | (Smartphone)
   |___________________| 

   5. Multipath inheritance

    ___________________
   |    A              |
   |___________________|  
        ^         ^
        |         |
    _________   _______
   |    B    | |   C   |  
   |_________| |_______| 
        ^          ^
    ____|__________|___
   |         D         | 
   |___________________| 

   D will have the features of A via B and C
*/

/*
    Virtual based classes -> useful for knowing the ambiguity of features of parent class in the derived class those who are comming via multiple paths

    class A{----};
    class B : virtual public A{----};
    class C : virtual public A{----};
    class D : public B, public C{----};

    As we can see from the figure that data members/function of class A are inherited twice to class D. 
    One through class B and second through class C. 
    When any data / function member of class A is accessed by an object of class D, ambiguity arises as to which data/function member would be called? 
    One inherited through B or the other inherited through C.
    This confuses compiler and it displays error. 
    Hence the class virtual is used
*/

/*
    Ways of inheritance

    class Parent
    class Child : public Parent 
    class Grandchild : public Child
    //in child class the protected of parent comes in protected of child and public of parent comes in the public of child

    class Parent
    class Child : protected Parent 
    class Grandchild : public Child
    //both public and protected entities of the parent comes in the protected of child
    

    class Parent
    class Child : private Parent 
    class Grandchild : public Child 
    //both the protected and public entities of parent class comes in the private of child   
*/

class Parent{
    private :
        int a;
    protected :
        int b;
    public :
        int c;
        void funParent(){
            a = 10;
            b = 5;
            c = 15;
        }
};

class Child : public Parent{
//if i specify here protected instead of public then : all the variables of parent class will become protected in child class and then the main cant access any of those varibles 
// if i specify here private instead of public then: all the variables of parent class will become private in child class and neither the grandchild class wont be able to inherit them , nor the main function would be able to access them directly
    private :
    protected :
    public :
    void funChild(){
        //a = 10; as it is a private member in parent class 
        b = 5;
        c = 15;
    }
};

class Grandchild : public Child{
    public:
    void funGrandchild(){
        //a = 10; as it is a private member in parent class
        b = 5;
        c = 20;
    }
};
int main(){
    Child c;
    //c.a = 10; this will show error because parent class has these variables as private and protected
    //c.b = 5;
    c.c = 15;
}