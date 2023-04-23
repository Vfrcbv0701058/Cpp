#include <iostream>
using namespace std;

void len(char string[]);

int main(){
    char *str = "Hello!";
    len(str);
}

void len(char string[]){
    int i = 0;
    for (i = 0;  string[i] != '\0'; i++){}
    cout << "Len = " << i << endl;
}
