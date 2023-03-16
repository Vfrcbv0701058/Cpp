#include <iostream>
using namespace std;

int main(){
    int num_1;
    int num_2;
    
    cout << "Enter num 1: ";
    cin >> num_1;
    cout << "Enter num 2: ";
    cin >> num_2;
    cout << "num 1 + num 2 = "<< num_1+num_2<<endl;
    cout << "num 1 / num 2 = ";
    
    try{
        if(num_2 == 0 )
            throw 123;
        cout << num_1/num_2 << endl;
    } catch(int i){
        cout << "Error #" << i <<" - divide by 0!!!"<<endl;
    }
}

