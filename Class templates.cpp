#include <iostream>
#include <string>
using namespace std;

class Point{
private:
    int x, y, z;
public:
    Point(){
        x = y = z = 0;
    }
    
    Point(int x, int y, int z): x(x), y(y), z(z){}
    
};

template <typename T1, typename T2>
class MyClass {
private:
    T1 value;
    T2 value_2;
public:
    MyClass(T1 value, T2 value_2): value(value), value_2(value_2){}
    
    void DataTypeSize(){
        cout << sizeof(value) << endl;
        cout << sizeof(value_2) << endl;
    }
};

int main(){
    Point val;
    int a = 324;
    double b = 423.423;
    MyClass<int, double> wer(a, b);
    wer.DataTypeSize();
}
