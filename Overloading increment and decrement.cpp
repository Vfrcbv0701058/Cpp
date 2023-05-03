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
        //с помощью  ! показываем что все выражение в скобочках мы инвертируем
    }
    
    /// Перегрузка оператора +
    point operator +(const point & other){
        point temp;
        temp.x = this -> x + other.x;
        temp.y = this -> y + other.y;
        return temp;
    }
    
    // префиксный инкримент
    point & operator ++(){
        this -> x += 1;
        this -> y++;
        return *this;
    }
    
    // постфиксный инкримент
    point & operator ++(int value){
        point temp(*this);
        this -> x++;
        this -> y++;
        return temp;
    }
    
};

int main(){
    point a(1,1);
    a++;
    point b = a++;
    
    return 0;
}
    
