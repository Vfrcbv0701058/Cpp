#include "./Header files/string->num.hpp"
 
int main(){
    string str;
    cin >> str;
    cout << str_to_num(str)<<endl;
}

int str_to_num (string str){
    int num = stoi(str);
    return num;
}
