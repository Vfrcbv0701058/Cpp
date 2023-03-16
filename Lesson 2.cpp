#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<< "1- random numer = "<< 1+rand()%80<<endl;
    cout<< "1- random numer = "<< 1+rand()%80<<endl;
    cout<< "1- random numer = "<< 1+rand()%80<<endl;
    cout<< "1- random numer = "<< 1+rand()%80<<endl;
    cout<< "1- random numer = "<< 1+rand()%80<<endl;
    cout<< "1- random numer = "<< 1+rand()%80<<endl;
    cout<< "1- random numer = "<< 1+rand()%80<<endl;
    cout<< "1- random numer = "<< 1+rand()%80<<endl;
    
    string name, name_1 ;
    cout<< " Your name: ";
    getline(cin, name);
    cout<< " Your name: ";
    getline(cin, name_1);
    if (name == name_1){
        cout<< "Equal"<<endl;
    }else{
        cout<< "Not equal"<<endl;
    }
    cout << name+name_1;
    cin.get();
    return 0;
}
