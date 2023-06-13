#include<iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
    set<int> mySet;
    mySet.insert(31);
    mySet.insert(345);
    mySet.insert(12);
    mySet.insert(-1);
    mySet.insert(24);
    
    auto it = mySet.find(3);
    cout << *it << endl;
    
    mySet.erase(31);
    
    for(auto &item: mySet)
        cout << item << endl;
    
    int val;
    cin >> val;
    if (mySet.find(val) != mySet.end())
        cout << "True" << endl;
    else
        cout << "False" << endl;
    
    cout << "---------------------------------------" << endl;
    multiset<int> myMultiset {432,543,2,2,2,2,5,6};
    for(auto &it: myMultiset)
        cout << it << endl;
    
    auto itl = myMultiset.lower_bound(1);
    auto its = myMultiset.upper_bound(1);
    auto a = myMultiset.equal_range(1);
}
