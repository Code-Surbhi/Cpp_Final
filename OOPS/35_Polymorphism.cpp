# include<iostream>
using namespace std;
    
class car
    {
    public:
        /*
        virtual void start()
        {
            cout<<"car started"<<endl;
        }
        virtual void stop()
        {
            cout<<"car stopped"<<endl;
        }
        */
        // functions ke andar wala code likhne ki zaroorat nhi hai just =0 kar do
        // PURE VIRTUAL FUNCITONS these are called -> these functions must be overrided by derived classes => purpose is to achieve runtime polymorphism
        virtual void start() = 0;
        virtual void stop() = 0; 
    };

class innova:public car
    {
    public:
        void start(){
            cout<<"innova started"<<endl;
        }
        void stop(){
            cout<<"innova stopped"<<endl;
        }
    };
class swift:public car
    {
    public:
        void start(){
            cout<<"swift started"<<endl;
        }
        void stop(){
            cout<<"swift stopped"<<endl;
        }
    };
int main(){
        //ptr depends on the object assigned to it
        car *ptr =new innova();
        ptr->start(); //Innova started -> output
        ptr = new swift();
        ptr->start(); //swift started -> output
}

// Runtime polymorphism is called -> dynamic method dispatch in java

