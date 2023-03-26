#include <iostream>

using namespace std;

float perimetr(float x, float y);
float perimetr(float x, float y, float z);

int main(){
    cout << perimetr(2, 3, 7) << endl;
    cout << perimetr(3, 4) <<endl;
}

float perimetr(float x ,float y){
    return (x+y)*2;
}

float perimetr(float x, float y, float z){
    return x+y+z;
}
