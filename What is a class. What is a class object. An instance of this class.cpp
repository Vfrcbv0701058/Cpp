#include <iostream>
#include <string>
using namespace std;

class Human{
public:
    int age;
    double weight;
    string name; 
};

class point{
public:
    int x;
    int y;
    int z;
};

int main(){
    Human firsHuman;
    firsHuman.name = "Maks";
    firsHuman.age = 18;
    firsHuman.weight = 65.4;
    cout << firsHuman.age << endl;
    cout << firsHuman.name << endl;
    cout << firsHuman.weight << endl;
    
    cout << "___________________________________________" <<endl;
    
    Human secondHuman;
    secondHuman.name = "Ivan";
    secondHuman.age = 9;
    secondHuman.weight = 30;
    cout << secondHuman.age << endl;
    cout << secondHuman.name << endl;
    cout << secondHuman.weight << endl;
    
    cout << "___________________________________________" <<endl;
    
    point a;
    a.x = 1;
    a.y = 3;
    a.z = 9; 
    
    return 0;
}
