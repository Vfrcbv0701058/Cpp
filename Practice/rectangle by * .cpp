# include <iostream>

using namespace std;

struct rectangle{
    int height;
    int width;
};

rectangle take_num(){
    rectangle r;
    cout << "Enter height: ";
    cin >> r.height;
    cout << "Enter width: ";
    cin >> r.width;
    return r;
}


int main (){
    rectangle r = take_num();
    for (int i = 0; i < r.height; i++){
        for (int j = 0; j < r.width; j++){
            cout << "*";
        }
        cout << endl;
    }
}
