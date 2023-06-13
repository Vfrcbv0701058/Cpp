#include<iostream>
#include<array>
using namespace std;

int main(){
    
    array<int, 4> arr {12,54,7,2};
    
    arr.fill(-1);
    
    for (auto elem : arr)
        cout << elem << endl;
    
    try{
        cout << arr.at(11) << endl;       // error
    }
    catch(const exception& ex){
        cout << ex.what() << endl;
    }
    
    cout << arr.size() << endl;
    cout << arr.front() << endl;
    cout << arr.back() << endl;
    
}
