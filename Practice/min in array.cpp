#include <iostream>
#include <ctime>
#define SIZE (10)

using namespace std;

int main (){
    int A[SIZE];
    srand48(time(NULL));
    bool ItWas;
    int min = 90; // Initialize to a high value
    for (int j = 0; j < SIZE; j++){
        ItWas = false;
        int NewValue = rand()% 90;
        for (int i = 0; i<SIZE; i++){
            if(A[i] == NewValue){
                ItWas = true;
                break;
            }
        }
        if (!ItWas){
            A[j] = NewValue;
        }
        else{
            j--;
        }
    }
    for (int i = 0; i < SIZE; i++){
        if (min > A[i]){
            min = A[i];
        }
        cout << A[i] << " ";
    }
    
    cout << "\nmin = " << min << endl;
    
    return 0;
}

