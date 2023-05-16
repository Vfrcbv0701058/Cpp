#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main (){
    string path = "My_File.txt";
    /* cin >> path;
    ofstream Fout;
    Fout.open(path + ".txt",ofstream::app);

    if (Fout.is_open()){
        cout << "OK" << endl;
        Fout << "Its our data!" << endl;
        int a;
        cin >> a;
        Fout << a;
    }
    else
        cout << "error" << endl;
    Fout.close(); */
    ifstream fin;
    fin.open(path);
    if (fin.is_open()) {
//        char ch;
        string str;
        while (!fin.eof()) {
            str = "";
            fin >> str;
//            getline(fin,str);
            cout << str << endl;
        }
    } else
        cout << "Error" << endl;
    fin.close();
}
