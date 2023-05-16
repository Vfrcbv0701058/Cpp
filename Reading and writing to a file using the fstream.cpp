#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main (){
    string path = "My_File.txt";
    fstream ds(path,fstream::in | fstream::out | fstream::app);
    if (ds.is_open()){
        short a = 0;
        string msg;
        cout << "Press 1 to write something to file" << endl;
        cout << "Press 2 to get something from file" << endl;
        cout << "Your choice is: ";
        while (a != 1 && a != 2) {
            cin >> a;
            if (a!=1 && a!= 2)
                cout << "Try again!" << endl;
        }
        
        if(a == 1){
            cout << "Enter what do you want to enter" << endl;
            cin >> msg;
            ds << msg << endl;
        }
        if(a == 2){
            cout << "This is your text: " << endl;
            while (!ds.eof()) {
                msg = "";
                ds >> msg;
                cout << msg << endl;
            }
        }
    } else
        cout << "File is close" << endl;
    ds.close();
}
