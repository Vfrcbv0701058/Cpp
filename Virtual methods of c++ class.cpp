#include <iostream>
#include <string>
using namespace std;

class Gun {
public:
    virtual void shoot(){
        cout << "GANG!" << endl;
    }
};

class SubmachineGun : public Gun {
public:
    void shoot() override{
        cout << "GANG! GANG! GANG!" << endl;
    }
};

class Player {
public:
    void Shoot(Gun *gun){
        gun -> shoot();
    }
};

int main(){
    Gun gun;
//    SubmachineGun machineGun;
//    Gun* weapon = &machineGun;
//    weapon -> shoot();    print: GANG! GANG! GANG!
//    Gun* weapon = &gun;
//    weapon -> shoot();    print: GANG!
    
    Player A;
    A.Shoot(&gun);
    return 0;
}
