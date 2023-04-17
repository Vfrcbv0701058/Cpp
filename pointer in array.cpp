#include <iostream>

using namespace std;

int main(){
    const int SIZE = 4; 
    int A[4] = {5,87,23,8};
    
    for (int i = 0; i < SIZE; i++){
        cout << "A[" << i+1 << "] = " << A[i] <<endl;
    }
    
    cout << "===================" << endl;
    int *pA = A;
    
    for (int i = 0; i < SIZE; i++){
        cout << "A[" << i+1 << "] = " << pA[i] <<endl;
    }
}
