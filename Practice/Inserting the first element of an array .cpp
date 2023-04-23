#include <iostream>
using namespace std;

void FillArray(int *const array, const int size);
void ShowArray(int *const array, const int size);
void push_front(int *&arr, int &size, int const value);

int main(){
    int size = 10;
    int *arr_1 = new int [size];
    FillArray(arr_1, size);
    ShowArray(arr_1, size);
    push_front(arr_1, size, 45);
    ShowArray(arr_1, size);
    delete [] arr_1;
}

void push_front (int *&arr, int &size, const int value){
    int *newArray = new int [(size++)];
    newArray[0] = value;
    for (int i = 1; i < size; i++)
        newArray[i] = arr[i - 1];
    delete [] arr;
    arr = newArray;
}

void FillArray(int *const array, const int size){
    #include<ctime>
    srand(time(NULL));
    for (int i = 0; i < size; i++)
        array[i] = rand() % 20;
}

void ShowArray(int *const array, const int size){
    for (int i = 0; i < size; i++)
        cout << array[i] << "\t";
    cout << endl;
}
