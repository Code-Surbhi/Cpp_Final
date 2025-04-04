#include <iostream>
using namespace std;

/*
    template <class T>
    T maximum(T x ,T y){
        return x>y?x:y;
    }
    maximum (10,15);
    maximum (12.5,9.5);

    //We can have a single datatype here
*/

/*
    template <class T ,class R>
    void add(T x, R y){
        cout<<x+y;
    }
    add(10,12.9); //int and double

    //We can have multiple datatypes
*/

template <class T>
class Stack{
    private:
        T S[10];
        int top;
    public:
        void push(T x);
        T pop();
};

template <class T>
void Stack<T>::push(T x){---}

template <class T>
T Stack <T>::pop(){---}

Stack<int> S;
Stack<float> S2;
