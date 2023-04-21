#include <iostream>
#include <ctime>
using namespace std;

void FillArray(int *const array, const int size);
void ShowArray(int *const array, const int size);

int main(){
    srand(time(NULL));
    int size = 10;
    int *Array_1 = new int [size];
    int *Array_2 = new int [size];
    
    FillArray(Array_1, size);
    FillArray(Array_2, size);
    cout << "First array = \t";
    ShowArray(Array_1, size);
    cout << "Second array = \t";
    ShowArray(Array_2, size);
    
    delete [] Array_1;
    
    int * new_array_1 = new int [size];
    for (int i = 0 ; i < size; i++)
        new_array_1[i] = Array_2[i];
    cout << "New first array = \t";
    ShowArray(new_array_1, size);
    
    delete [] new_array_1;
    delete [] Array_2;
}


void FillArray(int *const array, const int size){
    for (int i = 0; i < size; i++)
        array[i] = rand() % 20;
}

void ShowArray(int *const array, const int size){
    for (int i = 0; i < size; i++)
        cout << array[i] << "\t";
    cout << endl;
}
