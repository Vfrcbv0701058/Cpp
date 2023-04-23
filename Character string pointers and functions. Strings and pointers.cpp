#include <iostream>
using namespace std;

int main (){
    char str [] = "Hello!";
    char *string = "Hello!";
    cout << string << endl;
    cout << str << endl;
    
    char *strArr[] = {"Hello ","world ", "TEST "};
    for (int i = 0; i < 3; i++)
        cout << strArr[i] << endl;
    
}
