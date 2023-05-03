#include <iostream>
#include <string>
using namespace std;

class MyClass{
public:
    void PrintMessage();
    
};

void MyClass::PrintMessage() {
    cout << "Hello!" << endl;
}


int main(){
    
    MyClass a;
    a.PrintMessage();
    return 0;
}
    
