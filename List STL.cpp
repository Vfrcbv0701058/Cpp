#include<iostream>
#include<list>
using namespace std;

template <typename T>
void PrintList(const list<T> &lst){
    for(auto it = lst.cbegin(); it != lst.cend(); ++it)
        cout << *it << "\t";
    cout << endl;
}

int main(){
    list<int> myList = {143, 99, 534, 99, 64,99, 3, 99, 99, 99,};
    myList.push_back(5);
    myList.push_front(432);
    cout << "Size is: " << myList.size() << endl;
    PrintList(myList);
    myList.sort();
    cout << "Sort" << endl;
    PrintList(myList);
    cout << "Pop front" << endl;
    myList.pop_front();
    PrintList(myList);
    cout << "Pop back" << endl;
    myList.pop_back();
    PrintList(myList);
    cout << "Unique" << endl;
    myList.unique();
    PrintList(myList);
    cout << "Reverse" << endl;
    myList.reverse();
    PrintList(myList);
    cout << "Insert" << endl;
    auto it = myList.begin();
    it++;
    myList.insert(it, 3);
    PrintList(myList);
    cout << "Erase" << endl;
    it++;
    myList.erase(it);
    PrintList(myList);
    cout << "Remove" << endl;
    myList.remove(99);
    PrintList(myList);
    cout << "Assign" << endl;
    myList.assign(5,99);
    PrintList(myList);
    
    
//    advance(it, 3);
    myList.clear();
}

