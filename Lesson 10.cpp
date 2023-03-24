#include <iostream>
using namespace std;

enum mall{parking = -1, hall, many_shops, roof};

int main(int argc, const char * argv[]) {
    
    int floor;
    bool exit = false;
    while(!exit){
        cout << "Enter your floor(from -1 to 2): ";
        cin >> floor ;
        switch (floor){
            case parking:
                cout<<"Welcome to parking"<<endl;
                break;
            case hall:
                cout<<"Welcome to hall"<<endl;
                break;
            case many_shops:
                cout<<"Welcome to shops' floor"<<endl;
                break;
            case roof:
                cout<<"Welcome to roof, i hope you will have some romantic"<<endl;
                break;
            default:
                cout << "Incorrect floor";
                break;
        }
        cout << "If you want to play again press 0 or press 1 to exit: " ;
        cin >> exit;
    }
    return 0;
}

