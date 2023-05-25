#include <iostream>
#include <string>
using namespace std;

enum pcstate {
    Off,
    On,
    Sleep
};

class PC {
private:
    pcstate pc;
public:
    
    pcstate GetState(){
        return pc;
    }
    void SetStates(pcstate ps){
        this -> pc = ps;
    }
};

int main(){
    PC pc;
    pc.SetStates(pcstate::Off);
    if (pc.GetState() == pcstate::On)
        cout << "PC is on" << endl;
    
    switch (pc.GetState()) {
        case pcstate:: On:
            cout << "PC is On!" << endl;
            break;
        case pcstate:: Off:
            cout << "PC is Off!" << endl;
            break;
        case pcstate:: Sleep:
            cout << "PC is sleeping" << endl;
            break;
    }
    
}
