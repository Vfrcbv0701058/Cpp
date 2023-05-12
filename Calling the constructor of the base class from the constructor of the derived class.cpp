#include <iostream>
#include <string>
using namespace std;

class A {
private:
    string msg;
public:
    void PrintMSG (){
        cout << msg << endl;
    }
    
    A(){
        cout << "Constr A" << endl;
        msg = "Some";
    }
    
    A(string msg){
        this -> msg = msg;
    }
    
    A(string msg, int a){
        this -> msg = msg;
    }
    
    ~A(){
        cout << "Destr A" << endl;
    }
};

class B : public A {
public:
    B():A("Some new"){
        cout << "Constr B" << endl;
    }
    
    ~B(){
        cout << "Destr B" << endl;
    }
};



int main(){
    B value;
    value.PrintMSG();
    return 0;
}
