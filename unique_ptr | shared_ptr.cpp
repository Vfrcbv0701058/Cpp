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
    unique_ptr<int> p1(new int (1));
    unique_ptr<int> p2;
    
    p2 = std::move(p1);
//    p2.swap(p1);
    cout << *p1 << endl;
    
    shared_ptr<int> po1(new int(43));
    shared_ptr<int> po2(po1);
}
