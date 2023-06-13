#include<iostream>
#include<vector>
using namespace std;

int main(){
    auto a = 10; // int
    auto b = 432.2; // double
    auto c = "string"; // const * char
//    auto b; // error
    auto d = true; // bool
    
    vector<int>myVector = {4,2,767,53,3,3};
//    vector<int>::iterator it = myVector.begin();
//
//    auto it2 = myVector.begin();
    
    for(auto it3 = myVector.begin(); it3 != myVector.end(); it3++)
        cout << *it3 << endl;
}
