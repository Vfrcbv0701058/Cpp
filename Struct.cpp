#include<iostream>
#include<string>
using namespace std;

class MyClass{
public:
    int a = 10;
    void Print (){
        cout << a << endl;
    }
};

class MyClass_2 : public MyClass{
    
};

struct MyStruct{
    int a = 27;
    void Print (){
        cout << a << endl;
    }
};

struct MyStruct_2 : MyStruct{
    
};

int main(){
    MyClass m;
    MyClass_2 m_2;
    MyStruct ms;
    MyStruct_2 ms_2;
//    m.a = 121;
    ms.a = 12;
//    m.Print();
    ms.Print();
    ms_2.a = 231;
    ms_2.Print();
}
