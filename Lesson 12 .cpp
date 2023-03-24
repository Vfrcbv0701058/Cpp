#include <iostream>

using namespace std;

void funct(int num);
float summ(float x, float y);


int main(){
    funct (234);
    cout<< summ (234.6,4) << endl;
}

void funct(int num){
    cout << "Parametr: " << num <<endl;
}

float summ(float x, float y){
    return x+=y;
}
