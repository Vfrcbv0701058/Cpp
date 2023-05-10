#include <iostream>
#include <string>
using namespace std;

// агрегация
class Cap{
private:
    string color = "Red";
public:
    string GetColor(){
        return color;
    }
};

/// Композиция
class Human {
private:
    class Brain{
    public:
        void Think(){
            cout << "I can think!" << endl;
        }
    };
    
    Brain brain;
//    создаем обьект класса мозг для того что бы обьект класса человек мог им(мозгом) пользоваться
    Cap cap;
//    создали обьект класса кепки который нее вложен в класс чепловека и это есть агрегация(когда два класса существуют незаввисимо)
public:
    void Think(){
        brain.Think();
    }
    void InspevtTheCap(){
        cout << cap.GetColor() << endl;
    }
};


int main(){
    Human Hu;
    Hu.Think();
    Hu.InspevtTheCap();
    return 0;
}
    
