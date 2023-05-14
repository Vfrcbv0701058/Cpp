#include <iostream>
#include <string>
using namespace std;

class Human {
public:
    
    Human(string name){
        this -> Name = name;
        this -> Age = 0;
        this -> Weight = 0;
    }
    Human(string name, int age): Human(name){
        this -> Age = age;
        this -> Weight = 0;
    }
    Human(string name, int age, int weight): Human(name, age){
        this -> Weight = weight;
    }
    
    int Age, Weight;
    string Name;
    
    
};

int main (){
    Human rtyu ("Karl", 43, 181);
}
