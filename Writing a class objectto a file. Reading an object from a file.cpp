#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Point {
public:
    int x,y,z;
    Point(){
        x = y = z = 0;
    }
    Point(int x,int y, int z): x(x), y(y), z(z){}
    
    void Print(){
        cout << "X = " << x << "\tY = " << y << "\tZ = " << z << endl;
    }
};

int main (){
    string path = "My_File.txt";
//    Point a(4, 5, 6);
//
//    ofstream fout;
//    fout.open(path,ofstream::app);
//
//    if (fout.is_open()){
//        cout << "File is open" << endl;
//        fout.write((char*) &a, sizeof(Point));
//    }
//    else
//        cout << "Такого файла нет" << endl;
//    fout.close();

    ifstream fin;
    fin.open(path);
    if (fin.is_open()){
        cout << "File is open" << endl;
        Point ds;
        while(fin.read((char*)&ds, sizeof(Point)))
            ds.Print();

    }
    else
        cout << "Такого файла нет" << endl;
}
