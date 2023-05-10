#include <iostream>
#include <string>
using namespace std;

class Apple;

class Human{
public:
    void TakeApple(Apple &apple);
    
    void EatApple(Apple &apple){
        
    }
};

class Apple{
private:
    int weight;
    string color;
public:
    friend class Human;
    Apple(int weight, string color){
        this -> weight = weight;
        this -> color = color;
    }
};

void Human::TakeApple(Apple &apple){
    cout << "TakeApple\n" << "Weight\t" << apple.weight << "\ncolor\t" << apple.color << endl;
}

int main(){
    Apple ap(34,"Red");
    Human Hu;
    Hu.TakeApple(ap);
    return 0;
}
    
