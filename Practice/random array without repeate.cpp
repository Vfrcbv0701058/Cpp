#include <iostream>
#include <ctime>
#define SIZE 10

using namespace std;
void print_arr(int A[SIZE]);

int main (){
    int A[SIZE];
    srand(time(NULL));
    bool alreadythere;
    for (int i= 0; i < SIZE;){
        alreadythere = false;
        int newrandomvalue = rand ()% 15+5;
        if (A[i] == newrandomvalue){
            alreadythere = true;
            break;
        }
        if (!alreadythere){
            A[i] = newrandomvalue;
            i++;
        }
    }
    print_arr(A);
}

void print_arr(int A[SIZE]){
    for (int i = 0; i< SIZE; i++){
        cout << A[i] << endl;
    }
}
