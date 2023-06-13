#include<iostream>
#include<forward_list>
using namespace std;

int main(){
    forward_list<int> fl {32,42};
    fl.push_front(1);
    fl.push_front(2);
    fl.push_front(3);
    
    forward_list<int>::iterator it = fl.begin();
    fl.insert_after(it, 999);
    it = fl.before_begin();
    fl.insert_after(it, 111);
    
    for(auto element : fl)
        cout << element << endl;
}
