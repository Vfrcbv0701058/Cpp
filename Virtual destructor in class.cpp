#include <iostream>
#include <string>
using namespace std;

class A {
public:
    A(){
        cout << "Выделена динамичесская память A" << endl;
    }
    
    virtual ~A(){
        cout << "Освобождена динамичесская память A" << endl;
    }
};

class B : public A{
public:
    B(){
        cout << "Выделена динамичесская память B" << endl;
    }
    
    ~B() override{
        cout << "Освобождена динамичесская память B" << endl;
    }
};

int main(){
    A *bptr = new B;
    delete bptr;
    return 0;
}
