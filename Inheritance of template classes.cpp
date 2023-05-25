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

template <typename T1>
class TypeSize {
protected:
    T1 value;
    
public:
    TypeSize(T1 value): value(value){}
    
    void DataTypeSize(){
        cout << sizeof(value) << endl;
    }
};

template<typename T1>
class TypeInfo : public TypeSize<T1>{
public:
    TypeInfo(T1 value): TypeSize<T1>(value){}
    using TypeSize<T1>::value;
    void ShowTypeName(){
        cout << "Type name is: " << typeid(value).name() << endl;
    }
};

int main(){
    double a = 43.5;
    TypeInfo<double> rew(a);
    rew.DataTypeSize();
}
