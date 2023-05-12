#include <iostream>
#include <string>
using namespace std;

class weapon {
public:
    virtual void shoot() = 0;
    void foo(){
        cout << "fafasddfd" << endl;
    }
};

class Gun : public weapon{
public:
    void shoot() override{
        cout << "GANG!" << endl;
    }
};

class SubmachineGun : public weapon {
public:
    void shoot() override{
        cout << "GANG! GANG! GANG!" << endl;
    }
};

class Player {
public:
    void Shoot(weapon *gun){
        gun -> shoot();
    }
};

class knife : public weapon {
public:
    void shoot() override{
        cout << "VJUH" << endl;
    }
};

int main(){
    Player a;
    knife ae;
    a.Shoot(&ae);
    return 0;
}
