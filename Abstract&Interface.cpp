#include <iostream>
using namespace std;

class Interface
{
public:
    Interface(){}
    virtual ~Interface(){}
    virtual void method1() = 0;    // "= 0" part makes this method pure virtual, and
                                   // also makes this class abstract.
    virtual void method2() = 0;
};

class Concrete : public Interface
{
private:
    int myMember;

public:
    Concrete(){}
    ~Concrete(){}
    void method1();
    void method2();
};

// Provide implementation for the first method
void Concrete::method1()
{
    cout<<"method1"<<endl;
}

// Provide implementation for the second method
void Concrete::method2()
{
    cout<<"method2"<<endl;
}

int main(void)
{
    Concrete d;
    Interface *f = &d;
    
    f->method1();
    f->method2();
    getchar(); 
    return 0;
}
