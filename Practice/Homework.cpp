#include <iostream>
#include <string>
using namespace std;
class Horse;
class Dog;

class Animal {
protected:
    string name;
    int age;
public:
    Animal(string name, int age): name(name) , age(age){}
  
    virtual void PrintInfo(){
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    friend ostream& operator << (ostream& os, Animal const &other);
};

class Horse : public Animal {
private:
    string breed;
    int height;
public:
    Horse(string name, int age, string breed, int height) : Animal(name, age), breed(breed), height(height) {}
      
    void PrintInfo() override {
        cout << "Breed: " << breed << "Height: " << height << endl;
    }

    friend ostream& operator<<(ostream& os, Horse const &horse);
};

class Dog : public Animal{
private:
    double weight;
public:
    Dog(string name, int age, double weight) : Animal(name, age), weight(weight) {}

    void PrintInfo() override {
        Animal::PrintInfo();
        cout << "Weight: " << weight << endl;
    }
    
    friend ostream& operator << (ostream& os, Dog const &dog);
};


ostream& operator << (ostream& os, Animal const &other){
    os << "Name: " << other.name << ", Age: " << other.age << endl;
    return os;
}
ostream& operator << (ostream& os, Horse const &horse) {
    os << "Name: " << horse.name << ", Age: " << horse.age << ", Breed: " << horse.breed << ", Height: " << horse.height << endl;
    return os;
}
ostream& operator << (ostream& os, Dog const &dog) {
    os << "Name: " << dog.name << ", Age: " << dog.age << ", Weight: " << dog.weight << endl;
    return os;
}



int main(){
    Dog Dobby("Dobby" , 3, 43.6);
    cout << Dobby;
    Horse Bucefal ("Bucefal", 2, "Abisyński", 207);
    cout << Bucefal;
}
