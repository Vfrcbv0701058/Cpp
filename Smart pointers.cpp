#include<iostream>
#include<string>
using namespace std;

template<typename T>
class SmartPointer{
private:
    T *ptr;
public:
    SmartPointer(T *ptr): ptr(ptr){
        
    }
    
    ~SmartPointer(){
        delete ptr;
    }
    
    T& operator *(){
        return *ptr;
    }
};

int main(){
//    int *ptr = new int (5);
//    SmartPointer <int> Pointer (ptr);
    SmartPointer<int> Pointer = new int(5);
    cout << *Pointer << endl;
    *Pointer = 2313312;
    cout << *Pointer << endl;
}
