#include <iostream>
#include <string>
using namespace std;


class Apple{
private:
    int weight;
    string color;
    int id;
    static int Count;
public:
    
    Apple(int weight, string color){
        this -> weight = weight;
        this -> color = color;
        Count ++;
        id = Count;
        
    }
    
    static int GetCount(){
        return Count;
    }
    
    int GetID(){
        return id;
    }
    
    static void ChangeColor(Apple &apple, string color){
        apple.color = color;
    }
};

int Apple::Count = 0;

int main(){
    Apple ap(34,"Red");
    Apple::ChangeColor(ap, "Green");
//    Apple::Count = 0;
//    Apple app(100,"fewd");
//    Apple app3(23,"fmew");
//    cout << ap.GetID() << endl;
//    cout << app.GetID() << endl;
//    cout << app3.GetID() << endl;
//    cout << app.GetCount() << endl;
    return 0;
}
    
