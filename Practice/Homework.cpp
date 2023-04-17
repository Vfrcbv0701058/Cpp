#include <iostream>

using namespace std;
void replacement(int *a, int *b);

int main(){
    int first, second;
    cout << "Enter first num: ";
    cin >> first;
    cout << "Enter second num: ";
    cin >> second;
    replacement(&first, &second);
    cout << "Function done \nA = " << first << "\t B = " << second << endl;
}

void replacement(int *a, int *b){
    int c = *b;
    *b = *a;
    *a = c;
}
