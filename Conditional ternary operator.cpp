#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a: ";
    cin >> a;
    
//    if(a == 0)
//        cout << "a is equals zero" << endl;
//    else if(a < 10)
//        cout << "a is smaller ten" << endl;
//    else if(a > 10)
//        cout << "a is bigger ten" << endl;
//    else
//        cout << "a is equal ten" << endl;
    
    (a == 0) ? (cout << "a is equals zero" << endl) : (a == 10) ? (cout << "a is equal ten" << endl) : (a < 10)? (cout << "a is smaller ten" << endl) : (cout << "a is bigger zero" << endl);
}
