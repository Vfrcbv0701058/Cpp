#include<iostream>
#include<stack>
#include<list>
#include<deque>
#include<vector>
using namespace std;

int main(){
    stack<int> st;
    st.push(2);
    st.emplace(8);
    st.emplace(1);
    st.emplace(97);
    st.emplace(822);
    st.emplace(4);
//    st.pop();
//    cout << st.top() << endl;
    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }
    
    stack<int, list<int>>st2;
    
}
