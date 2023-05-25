#include <iostream>
#include <string>

using namespace std;

void foo(int value){
    if (value < 0)
        throw runtime_error("Число меньше нуля");
    else
        cout << "Переменная = " << value << endl;
}

int main(){
    try {
        foo(-1);
    } catch(const exception &ex){
        cout << "Ошибка поймана!" << ex.what() << endl;
    }
}
