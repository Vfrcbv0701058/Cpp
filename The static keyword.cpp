#include <iostream>
#include <string>
using namespace std;


class Apple{
private:
    int weight;
    string color;
public:
    static int Count;
    Apple(int weight, string color){
        this -> weight = weight;
        this -> color = color;
        Count ++;
    }
};

int Apple::Count = 0;

int main(){
    Apple ap(34,"Red");
    Apple app(100,"fewd");
    cout << ap.Count << endl;
    cout << app.Count << endl;
    return 0;
}
    
