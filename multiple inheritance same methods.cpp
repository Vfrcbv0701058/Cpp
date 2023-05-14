#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    void Use(){
        cout << "I drive car!" << endl;
    }
};

class Airplain{
public:
    void Use(){
        cout << "I fly!" << endl;
    }
};

class FlyCar: public Car, public Airplain{
public:
};

int main (){
    Car a;
    Airplain b;
    FlyCar c;
    ((Car)c).Use();
    ((Airplain)c).Use();
}
