#include<iostream> 
using namespace std; 

class Base
{
public:
   // FunctionPointer *__vptr; (Virtual or vptr)
    virtual void function1() {
        cout<<"Inside Base fun1"<<endl;
    };
    virtual void function2() {
        cout<<"Inside Base fun2"<<endl;
    };
};
 
class D1: public Base
{
public:
    virtual void function1() {
        cout<<"Inside Derived1"<<endl;};
};
 
class D2: public Base
{
public:
    virtual void function2() {
        cout<<"Inside Derived2"<<endl;};
};

int main()
{
    D1 d1;
    D2 d2;
    Base *dPtr = &d1;
    Base *dPtr2 = &d2;
    dPtr->function1();
    dPtr->function2();
    dPtr2->function1();
    dPtr2->function2();
}
