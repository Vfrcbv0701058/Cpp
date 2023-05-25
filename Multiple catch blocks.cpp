#include <iostream>
#include <string>

using namespace std;

void foo(int value){
    if (value < 0)
//        throw runtime_error("Число меньше нуля");
            throw "Число меньше нуля";
    if(value == 0)
        throw runtime_error("Число равно нулю");
    if(value == 1)
        throw 1;
    cout << "Переменная = " << value << endl;
}

int main(){
    try {
        foo(1);
    } catch(const exception &ex){
        cout << "Ошибка поймана! " << ex.what() << endl;
    } catch(const char *ex){
        cout << "Ошибка поймана! " << ex << endl;
    } catch (...){
        cout << "Error" << endl;
    }
}
