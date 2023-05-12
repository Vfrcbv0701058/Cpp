#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> myVector {321};
    myVector.push_back(44);
    myVector.push_back(2);
    myVector.push_back(74);
    
    myVector[0] = 100;
    for(int i = 0; i < myVector.size();i++){
        cout << myVector[i] << endl;
    }
    cout << "POP_BACK" << endl;
    myVector.pop_back();
    
    for(int i = 0; i < myVector.size();i++){
        cout << myVector[i] << endl;
    }
    
    cout << "\nCLEAR\n" << myVector.size() << endl;
    myVector.clear();
    cout << myVector.size() << endl;
    
    myVector.reserve(100);
    cout << "Capasity: " << myVector.capacity() << endl;
    cout << "shrink_to_fit() " << endl;
    myVector.shrink_to_fit();
    cout << "Capasity: " << myVector.capacity() << endl;
    
    cout << "Resize" << endl;
    
    myVector.resize(2,23);
    for(int i = 0; i < myVector.size();i++){
        cout << myVector[i] << endl;
    }
}
