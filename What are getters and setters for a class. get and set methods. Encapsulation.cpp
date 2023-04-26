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

int main (){
    int b  = 67;
    point a;
    a.SetX(b);
    cout << a.GetX() << endl;
    
    cout << "_____________________" << endl;
    
    a.SetY(11);
    cout << a.GetY() << endl;
}
