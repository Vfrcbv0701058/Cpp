#include <iostream>
using namespace std;

void FillArray(int *const array, const int size);
void ShowArray(int *const array, const int size);
void push_back (int *&arr, int &size, const int value);
void pop_back (int *&arr, int &size);

int main(){
    int size = 5;
    int*arr= new int[size];
    FillArray(arr,size);
    ShowArray(arr, size);
    push_back(arr, size, 43);
    ShowArray(arr, size);
    pop_back(arr, size);
    ShowArray(arr, size);
    delete [] arr;
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

void push_back (int *&arr, int &size, const int value){
    int *newArray = new int [size+1];
    for (int i = 0; i < size; i++)
        newArray[i] = arr[i];
    newArray [size++] = value;
    delete [] arr;
    arr = newArray;
    
}
void pop_back (int *&arr, int &size){
    size--;
    int *newArray = new int [size];
    for (int i = 0; i < size; i++)
        newArray[i] = arr[i];
    delete [] arr;
    arr = newArray;
}
