#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    string path = "y_File.txt";
    ifstream ds;
    ds.exceptions(ifstream::badbit | ifstream::failbit);
    try {
        cout << "Try to open file!" << endl;
        ds.open(path);
        cout << "File is open!" << endl;

    } catch (const exception &ex) {
        cout << ex.what() << endl;
    }

    ds.close();
}
