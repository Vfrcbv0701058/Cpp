#include <iostream>
#include <string>
using namespace std;

class A {
public:
    A(){
        
    }
    
    virtual ~A() = 0;
//    создали чисто виртуальный деструктор
};

A::~A(){}
// вынесли определение этого деструктора что бы компилятор не ругался

class B : public A{
public:
    B(){
         
    }
    
    ~B() override{
         
    }
};

int main(){
    A *bptr = new B;
    delete bptr;
    return 0;
}
