#include <iostream>
#include <string>
using namespace std;

void fun1(){
    cout << "Fun 1 is here" << endl;
}

void fun2(){
    cout << "Fun 2 is here" << endl;
}

int fun3(int a){
    return a - 3;
}

int fun4(int a){
    return a - 4;
}

string GetDataFromBD(){
    return "Data from BD";
}

string GetDataFromWebServer(){
    return "Data from WebServer";
}

string GetDataFromAstral(){
    return "Data from Astral";
}

void ShowInfo(string (*foo)() ){
    cout << foo() << endl;
}

int main(){
    void (*fooPointer1)();
    fooPointer1 = fun1;
    fooPointer1();
    
    int (*funPoint)(int a);
    funPoint = fun4;
    cout << funPoint(43) << endl;
    
    ShowInfo(GetDataFromAstral);
}
