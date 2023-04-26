#include <iostream>
#include <string>
using namespace std;

class Human{
public:
    int age;
    double weight;
    string name;
    
    void Print (){
        cout << "Имя: " << name << "\nВозраст: " << age << "\nВес: " << weight << endl;
    }
};


class point{
private:
    int x = 23;
    int y = 45;
public:
    
    point(int valueX, int valueY){
        x = valueX;
        y = valueY;
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
};

class CoffeGrinder{
private:
    bool CheckVoltage(){
        return false;
    }
public:
    void Start(){
        if(CheckVoltage())
            cout << "VjuHHH!" << endl;
        else
            cout << "Beep Beep" << endl;
    }
};

int main(){
    point a(45, 23);
    a.print();
    
    point b(90,2);
    b.print();
}
