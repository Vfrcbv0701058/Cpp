#include <iostream>
using namespace std;

void FillArray(int *const array, const int size);
void ShowArray(int *const array, const int size);
void Some_index_insert(int *&arr, int &size, const int value, int index);

int main(){
    int size = 0;
    int index = 0;
    int value = 0;
    cout << "Enter size = ";
    cin >> size;
    cout << "Enter value = ";
    cin >> value;
    cout << "Enter index = ";
    cin >> index;

    
    int *arr_1 = new int [size];
    FillArray(arr_1, size);
    ShowArray(arr_1, size);
    Some_index_insert(arr_1, size, value, index);
    ShowArray(arr_1, size);
    delete [] arr_1;
}

void Some_index_insert(int *&arr, int &size, const int value, int index) {
    int *new_arr = new int[(size++)];
    for (int i = 0, j = 0; i < size; i++, j++) {
        if (i == index - 1)
            new_arr[j++] = value;
        new_arr[j] = arr[i];
    }
    delete[] arr;
    arr = new_arr;
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
