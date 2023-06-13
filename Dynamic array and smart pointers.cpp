#include<iostream>
#include<string>
#include <memory>
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
    int SIZE = 5;
    shared_ptr<int[]> ptr (new int [SIZE] {312,321,4,534,2});
    for (int i = 0; i < SIZE; i++)
        cout << ptr[i] << endl;
        
}
