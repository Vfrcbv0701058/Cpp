#include <iostream>

using namespace std;

int fun(int a){
    if (a < 1)
        return 0;
    a--;
    cout << a << endl;
    
    return fun(a);
}
int main(){
    fun(5);
}
