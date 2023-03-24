#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    
//    char text[50];
    
    ofstream file ("text.txt", ios_base::app);
    file << "Work with files in C++";
    file.close();
    
//    ifstream file ("text.txt");
//    if (!file.is_open())
//        cout << "Sorry file is not open!" << endl;
//    else {
//        file >> text;
//        cout << text;
//
//        file.getline(text, 50);
//        cout << text << endl;
//        file.close();
//    }
    
    
    
    return 0;
}

