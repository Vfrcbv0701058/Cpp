#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
//    int *ptrNum = new int(7);
    int *ptrNum = new int;
    *ptrNum = 7;
    
    cout<< *ptrNum << endl;
    delete ptrNum;
    
    // Массив
    float *ptrarr = new float [10];
    
    for (int i=0; i<10; i++){
        ptrarr[i]= rand()%80+1;
    }
    for (int i=0; i<10; i++){
        cout << ptrarr[i]<<endl;
    }
    
    delete [] ptrarr;
}
