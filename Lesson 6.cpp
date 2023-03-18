#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    const float pi= 3.14;
    cout<<pi<<endl;
//    Указатель
    int value = 8;
    int *ptrValue=&value;
    int**ptr_ptrValue = &ptrValue ;
    
    cin>> **ptr_ptrValue;
    cout <<*ptrValue<<endl;
    cout <<ptrValue<<" = "<<&value<<" = "<<ptr_ptrValue<<" = "<<*ptrValue<<endl;
//    Cсылкa
    int &ref = value;
    cin >> ref;
    cout << *ptrValue<<endl;
    cout << value<< " = "<< ref<<endl;
    
}
