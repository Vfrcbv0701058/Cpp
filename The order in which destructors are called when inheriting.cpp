#include <iostream>
#include <string>
using namespace std;

// https://www.youtube.com/watch?v=S_owqPD5dVk

class A {
public:
    A(){
        cout << "Constr A" << endl;
    }
    
    ~A(){
        cout << "Destr A" << endl;
    }
};

class B : public A {
public:
    B(){
        cout << "Constr B" << endl;
    }
    
    ~B(){
        cout << "Destr B" << endl;
    }
};

class C : public B{
public:
    C(){
        cout << "Constr C" << endl;
    }
    
    ~C(){
        cout << "Destr C" << endl;
    }
};

int main(){
    A a;
    B b;
    C c;
    return 0;
}
