#include <iostream>
#include <string>
using namespace std;

class TestClass{
private:
    int arr[5]{5,44,4,987,69};
public:
    int & operator[](int index){
        return arr[index];
    }
};

int main(){
    TestClass a;
    for (int i = 0; i < 5; i++)
        cout << a[i] << endl;
    a[0] = 100;
    cout << "a = " << a[0] << endl;
    return 0;
}
    
