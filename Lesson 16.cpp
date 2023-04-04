#include <iostream>
#include <string>

using namespace std;

class Building{
private:
    int year;
    string type;
public:
    Building(int y, string t){
        set_data(y, t);
    }
    
    Building(int y){
        year = y;
        cout << "Данные установлены" << endl;
    }
    
    void set_data(int year, string type){
        year = year;
        type = type;
    }
    
    void get_info(){
        cout << "Type: " << type << ". Year: " << year << endl;
    }
    
    ~Building(){
        cout << "Delete object" << endl;
    }
};

int main(){
    Building school(2014, "Школа");
    school.get_info();

    Building house(45, "Дом");
    house.get_info();
    
    Building Home(445);
    house.get_info();
}
