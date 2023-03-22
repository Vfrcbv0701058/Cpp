#include "./Header files/string->num.hpp"
 
int main(){
    string str;
    cin >> str;
    cout << str_to_num(str)<<endl;
    delete num;
}

int str_to_num (string str){
    int num = new int(stoi(str));
    return num;
}
