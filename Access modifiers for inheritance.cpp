#include <iostream>
#include <string>
using namespace std;

class A {
public:
    string msgOne = "msg 1";
private:
    string msgTwo = "msg 2";
protected:
    string msgThree = "msg 3";
};

class B : public A {
public:
    void PrintMSG(){
        cout << msgThree << endl;
    }
};

int main(){
    B b;
    b.PrintMSG();
    return 0;
}
    
