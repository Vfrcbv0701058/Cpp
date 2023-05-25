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
    
};

ostream & operator << (ostream & os, const Point &point){
    os << point.x << " " << point.y << " " << point.z << endl;
    return os;
}

istream & operator >>(istream & is, Point & po){
    is >> po.x >> po.y >> po.z;
    return is;
}

int main(){
    string path = "My_File.txt";
//    Point p(4,176,669);
    
    fstream ds;
    ds.open(path, fstream::in | fstream::out | fstream::app);
    if (ds.is_open()){
//        ds << p;
        Point po;
        ds.seekg(0, ios::beg);
        while(ds >> po){
            cout << po;
        }
    }
    else
        cout << "File is close!" << endl;
    ds.close();
}
