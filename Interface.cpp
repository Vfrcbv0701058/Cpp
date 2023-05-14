#include <iostream>
#include <string>
using namespace std;

class IBicycle {
public:
    virtual void TwistTheWheel() = 0;
    virtual void Ride () = 0;
};

class SimpleBicycle : public IBicycle{
    void TwistTheWheel() override{
        cout << "Twist the wheel (SimpleBicycle)" << endl;
    }
    void Ride () override{
        cout << "Ride (On SimpleBicycle)" << endl;
    }
};

class SportBicycle : public IBicycle {
public:
    void TwistTheWheel() override{
        cout << "Twist the wheel (SportBicycle)" << endl;
    }
    void Ride () override{
        cout << "Ride (On SportBicycle)" << endl;
    }
};

class Human {
public:
    void RideOn(IBicycle &Bicycle){
        cout << "Twist" << endl;
        Bicycle.TwistTheWheel();
        cout << "Let's go" << endl;
        Bicycle.Ride();
    }
};

int main (){
    Human h;
    SimpleBicycle sa;
    SportBicycle rew;
    h.RideOn(sa);
    h.RideOn(rew);
}
