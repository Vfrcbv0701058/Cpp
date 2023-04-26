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
    int z = 56;
public:
    void Print(){
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    }
};

int main (){
    point a;
    a.Print();
}
