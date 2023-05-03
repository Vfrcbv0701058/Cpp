#include <iostream>
#include <string>
using namespace std;

class point{
private:
    int x;
    int y;
public:
    
    point(){
        x = 0;
        y = 0;
        cout << this << " Конструктор" << endl;
        
    }
    point(int valueX, int valueY){
        x = valueX;
        y = valueY;
    }
    point(int valueX, bool boolean){
        x = valueX;
        
        if(boolean)
            y = 1;
        else
            y = -1;
    }
    
    void SetX(int valueX){
        x = valueX;
    }
    
    int GetX(){
        return x;
    }

    void SetY(int y){
         this ->  y = y;
    }
    
    int GetY(){
        return y;
    }
    
    void print(){
        cout << "X = " << x << "\tY = " << y << endl;
    }
};

class MyClass{
private:
    int *data;
public:
    MyClass(int size){
        data = new int [size];
        for (int i = 0; i< size; i++)
            data [i] = i;
        cout << "Object value: " << *data << " Конструктор" << endl;
    }
    
    ~MyClass(){
        cout << "Object value: " << *data << " Деструктор" << endl;
        delete [] data;
    }
};

void foo(){
    cout << "Start FOO" << endl;
    MyClass c(6);
    cout << "End FOO" << endl;
}

int main(){
    point a;
    a.SetY(5);
    a.print();
}
