#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> myVector = {1,9, 44, 422, 676, 78};
    vector<int>::iterator it;
    it = myVector.begin();
    
    for(vector<int>::const_iterator i = myVector.cbegin(); i != myVector.cend(); i++)
        cout << *i << endl;
    
    for(vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); i++)
        cout << *i << endl;
    
//    advance(it, 2);
//    cout << "Advance\n" << *it << endl;
    
    cout << "Insert" << endl;
    myVector.insert(it, 999);

    for(vector<int>::const_iterator i = myVector.cbegin(); i != myVector.cend(); i++)
        cout << *i << endl;
    
    cout << "Erase" << endl;
    
    vector<int>::iterator itErase = myVector. begin();
    
    myVector.erase (itErase, itErase+3);
    for (vector<int>:: iterator i = myVector .begin(); i != myVector.end() ; i++)
        cout << *i << endl;
}
