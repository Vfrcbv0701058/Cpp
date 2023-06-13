#include<iostream>
#include <thread>
#include <chrono>
#include <string>
using namespace std;

void DoWork(string str){
    for(int i = 0; i < 10; i++){
        cout << "ID thread = " <<this_thread::get_id() << " \t" << str << "\t" << i << endl;
        this_thread::sleep_for(chrono::seconds(3));
    }
}

int main(){
    thread th(DoWork,"DoWork");
    cout << "START" << endl;
//    this_thread::sleep_for(chrono::seconds(1));
//    cout << this_thread::get_id() << endl;
    DoWork("Main");
    th.join();
    
    cout << "END" << endl;
}
