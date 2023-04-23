#include <iostream>
using namespace std;

int main (){
    
    setlocale(LC_ALL, "ru");
    
    for(int i = 0; i < 256; i++){
        cout << "code = " << i << "\t char = " << (char)i << endl;
    }
}
