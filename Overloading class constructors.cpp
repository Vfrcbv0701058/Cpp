#include <iostream>
#include <string>
using namespace std;

class point{
private:
    int x;
    int y;
public:
    
    point(){
        x = 0;
        y = 0;
    }
    point(int valueX, int valueY){
        x = valueX;
        y = valueY;
    }
    point(int valueX, bool boolean){
        x = valueX;
        
        if(boolean)
            y = 1;
        else
            y = -1;
    }
    
    void SetX(int valueX){
        x = valueX;
    }
    
    int GetX(){
        return x;
    }

    void SetY(int valueY){
        y = valueY * 2;
    }
    
    int GetY(){
        return y;
    }
    
    void print(){
        cout << "X = " << x << "\tY = " << y << endl;
    }
};

int main(){
    point a;
    a.print();
    
    point b(5,14);
    b.print();
    
    point c(3,false);
    c.print();
}
