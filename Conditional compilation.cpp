#include <iostream>
#define DEBUG
using namespace std;

int main(){
    setlocale(LC_ALL, "ru");
#ifndef DEBUG
    cout << "Начало цикла" << endl;
    cout << "DEBUG" << endl;
#else
    cout << "NO DEBUG" << endl;
#endif // DEBUG
    for (int i = 0; i < 5; i++)
        cout << i + 1 << endl;
#ifdef DEBUG
    cout << "Конец цикла" << endl;
#endif // DEBUG
}
