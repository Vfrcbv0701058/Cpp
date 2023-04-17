#include <iostream>

using namespace std;

void fun(int *pa){
    (*pa)++;    // сначала разыменовываем указатель а потом увеличиваем его
}

int main(){
    int a = 0;
    int *pa = &a;
    fun(pa);
    cout << a << endl;
}
