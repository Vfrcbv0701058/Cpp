#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    map<int, string> myMap;
    myMap.emplace(3,"Monitor");
    myMap.insert(make_pair(1, "Telefon"));
    myMap.insert(pair<int, string>(2, "Laptop"));
    myMap.emplace(4, "Keyboard");
    cout << myMap[3] << endl;
    
    map<string, int> myMap2;
    
    myMap2.emplace("Petya", 344);
    myMap2.emplace("Dima", 431412);
    myMap2.emplace("Maksym", 78954);
    myMap2["Petya"] = 99;
    cout << myMap2["Petya"] << endl;
    
    multimap<string, int>myMultimap;
    myMultimap.emplace("Петя", 1313);
    myMultimap.emplace("Петя", 100);
    myMultimap.emplace("Маша", 222);
    myMultimap.emplace ("Миша", 4441);
    
    for(auto &item: myMap){
        cout << item.first << ":" << item.second << endl;
    }
}
