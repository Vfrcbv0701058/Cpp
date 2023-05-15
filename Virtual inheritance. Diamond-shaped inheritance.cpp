#include <iostream>
#include <string>
using namespace std;

//class Component {
//public:
//    string CompanyName;
//    Component(string comName): CompanyName(comName){
//        cout << "Конструктор Detail" << endl;
//    }
//};
//
//class GPU: public Component {
//public:
//    GPU(string CompanyName): Component(CompanyName){
//        cout << "Конструктор GPU" << endl;
//    }
//};
//
//class Memory :public Component{
//public:
//    Memory(string CompanyName): Component(CompanyName){
//        cout << "Конструктор Memory" << endl;
//    }
//};
//
//class GraphicCard : public GPU, public Memory{
//public:
//    GraphicCard(string GPUCompanyName, string MemoryCompanyName): GPU(GPUCompanyName), Memory(MemoryCompanyName){
//        cout << "Конструктор Graphic Card" << endl;
//    }
//};
 
class Character {
public:
    int HP;
    Character(){
        cout << "Конструктор Character" << endl;
    }
};

class Orc: public virtual Character {
public:
    Orc(){
        cout << "Конструктор Orc" << endl;
    }
};

class Warrior :public virtual Character{
public:
    Warrior(){
        cout << "Конструктор Warrior" << endl;
    }
};

class OrcWarrior : public Orc, public Warrior{
public:
    OrcWarrior(){
        cout << "Конструктор OrcWarrior" << endl;
    }
};

int main (){
    OrcWarrior();
}

