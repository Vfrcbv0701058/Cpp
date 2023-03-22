#include <iostream>
using namespace std;
    
int main(){
    float num_1=0, num_2=0, res=0;
    cout << "Введите число: ";
    cin >> num_1;
    cout << "Введите число: ";
    cin >> num_2;
    cout << "Введите оператор:";
    char oprt;
    cin >> oprt;
    switch (oprt){
        case '+':
            res = num_1+num_2;
            break;
        case '-':
            res = num_1-num_2;
            break;
        case '*':
            res = num_1*num_2;
            break;
        default:
            if(oprt == '/' || oprt == '\\'){
                if(num_2 == 0){
                    cout << "На ноль делить нелья" <<endl;
                }else
                    res = num_1 / num_2;
            }else {
                cout << "Не правильный оператор" << endl;
            }break;
    }
    cout << "Результат: " << res << endl;
}
