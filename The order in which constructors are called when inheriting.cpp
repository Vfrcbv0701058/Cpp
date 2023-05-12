#include <iostream>
#include <string>
using namespace std;

class A {
public:
    A(){
        cout << "Constr A" << endl;
    }
};

class B : public A {
public:
    B(){
        cout << "Constr B" << endl;
    }
};

class C : public B{
public:
    C(){
        cout << "Constr C" << endl;
    }
};

int main(){
    A a;
    B b;
    C c;
    return 0;
}
