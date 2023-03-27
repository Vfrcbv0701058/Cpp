#include <iostream>
#include <string>

using namespace std;

class Building{
private:
    int year;
    string type;
public:
    void set_data(int y, string t){
        year = y;
        type = t;
    }
    void get_info(){
        cout << "Type: " << type << ". Year: " << year << endl;
    }
};

int main(){
    Building school;
//    school.type = "Школа";
//    school.year = 2004;
    school.set_data(2014, "Школа");
    school.get_info();

    Building house;
//    house.type = "Дом";
//    house.year = 2010;
    house.set_data(45, "Дом");
    house.get_info();
}
