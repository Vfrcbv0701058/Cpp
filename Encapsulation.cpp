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
    CoffeGrinder a;
    a.Start();
}
