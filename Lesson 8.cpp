#include <iostream>
#include <clocale>

using namespace std;

int main(int argc, const char * argv[]) {
    setlocale(LC_CTYPE, "rus");
    cout<< "привет"<<endl;
    
    char string[] = "Hello world";
    
    int i = 0;
    while (string[i] != '\0'){
        cout << string[i];
        i++;
    }
    for (int j = 0; string[j]!='\0'; j++)
        cout<<string[j];
    
    cout<<"Введите строку: ";
    char string1[500];
    gets(string1);
    cout << string1 <<endl;
}
