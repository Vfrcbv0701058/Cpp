#include <iostream>

using namespace std;
void fun (int a);
void fun2 (int &a);
void fun3 (int *a);

int main(){
    int value = 5;
    
    cout << "fun value = ";
    fun(value);
    cout << value << endl;
    
    cout << "fun2 value = ";
    fun2(value);
    cout << value << endl;
    
    cout << "fun3 value = ";
    fun3(&value);
    cout << value << endl;
}

void fun(int a){
    a = 1;
}

void fun2(int &a){
    a = 2;
}

void fun3(int *a){
    *a = 3;
}
