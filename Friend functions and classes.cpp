#include <iostream>
#include <string>
using namespace std;

class Test;

class point{
private:
    int x;
    int y;
    friend void changeX(point &value, Test &testValue);
public:
    
    point(){
        x = 0;
        y = 0;
        cout << this << "Constructor" << endl;
    }
    
    point(int valueX, int valueY){
        x = valueX;
        y = valueY;
        cout << this << " \tConstructor" << endl;
    }
    
    void SetX(int valueX){
        x = valueX;
    }
    
    int GetX(){
        return x;
    }

    void SetY(int valueY){
        y = valueY * 2;
    }
    
    int GetY(){
        return y;
    }
    
    void print(){
        cout << "X = " << x << "\tY = " << y << endl;
    }
    
/// Перегрузка оператора ==
    bool operator == (const point & other){
        return (this-> x == other.x && this -> y == other.y);
    }
    
    /// Перегрузка оператора !=
        bool operator != (const point & other){
            return !(this-> x == other.x && this -> y == other.y);
            // с помощью  ! показываем что все выражение в скобочках мы инвертируем
        }
    
};

class Test{
private:
    int Data = 0;
    friend void changeX(point &value, Test &testValue);

};

void changeX(point &value, Test &testValue){
    value.x = 432;
    value.y = 421;
    testValue.Data = 40;
}

int main(){
    point a(5,13);
    a.print();
    Test test;
    changeX(a, test);
    a.print();
    return 0;
}
    
