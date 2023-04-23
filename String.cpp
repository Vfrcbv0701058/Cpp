#include <iostream>
using namespace std;

int main(){
    char symbol [] = "Hello world!";
    cout << symbol << endl;
    
    char string [] = {'H','e','l','l','o','\0'};
    cout << string << "\t" << strlen(string) << endl;
}
