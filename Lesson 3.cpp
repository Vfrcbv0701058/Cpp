#include <iostream>
using namespace std;

int main(){
    for(int counter = 1; counter <= 10; counter++){
        cout<<" "<<counter;
        if (counter %5 ==0)
            continue;
    }
    int i=20;
    
    while(i > 0){
        cout<<" "<< i;
        i /= 3;
    }
    
    int j=20;
    i = 10;
    do{
        j+=i;
    }while(j==0);
    cout<< j;
}
