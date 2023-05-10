#include <iostream>
#include <string>
using namespace std;


class Apple{
private:
    int weight;
    string color;
    int id;
public:
    static int Count;
    Apple(int weight, string color){
        this -> weight = weight;
        this -> color = color;
        Count ++;
        id = Count;
        
    }
    
    int GetID(){
        return id;
    }
};

int Apple::Count = 0;

int main(){
    Apple ap(34,"Red");
    Apple app(100,"fewd");
    cout << ap.GetID() << endl;
    cout << app.GetID() << endl;
    return 0;
}
    
