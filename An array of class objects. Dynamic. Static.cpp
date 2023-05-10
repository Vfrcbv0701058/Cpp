#include <iostream>
#include <string>
using namespace std;

class Pixel{
private:
    int r, g, b;
public:
    Pixel(){
        r = g = b = 0;
    }
    Pixel(int r, int g, int b){
        this -> r = r;
        this -> g = g;
        this -> b = b;
    }
    string GetInfo(){
        return "Pixel r = " + to_string(r) + " g = " + to_string(g) + " b = " + to_string(b);
    }
};
    
static const int LENGTH = 5;
    
Pixel img[LENGTH]{
        Pixel(321,43,2),
        Pixel(343,325,12),
        Pixel(1,3,65),
        Pixel(765,3,53),
        Pixel(876,1,444)
};

class Image{
public:
    void GetImageInfo(){
        for(int i = 0; i < LENGTH; i++){
            cout << img[i].GetInfo() << endl;
        }
    }
};

int main(){
    const int LENGTH = 5;
    Pixel arrPixel[LENGTH]{
        Pixel(423,54,3),
        Pixel(423,54,3),
        Pixel(423,54,3),
        Pixel(423,54,3)
    };
    
    Pixel *Arr = new Pixel [LENGTH];
    cout << Arr[0].GetInfo() << endl;
    delete [] Arr;
    return 0;
}
    
