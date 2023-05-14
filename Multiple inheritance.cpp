#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    void Drive(){
        cout << "I drive car!" << endl;
    }
};

class Airplain{
public:
    void Fly(){
        cout << "I fly!" << endl;
    }
};

class FlyCar: public Car, public Airplain{
    
};

int main (){
    Car a;
    a.Drive();
    Airplain b;
    b.Fly();
    FlyCar c;
    c.Fly();
}
