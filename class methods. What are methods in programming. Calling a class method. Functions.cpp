#include <iostream>
#include <string>
using namespace std;

class point{
public:
    int x;
    int y;
    int z;
};

class Human{
public:
    int age;
    double weight;
    string name;
    
    void Print (){
        cout << "Имя: " << name << "\nВозраст: " << age << "\nВес: " << weight << endl;
    }
};



int main(){
    
    Human firstHuman;
    firstHuman.age = 28;
    firstHuman.name = "Maksym";
    firstHuman.weight = 75.2;
    firstHuman.Print();
    return 0;
}
