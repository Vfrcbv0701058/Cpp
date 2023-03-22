#include <iostream>
#include <string>

using namespace std;

string* number_to_string(float *pnum);

int main(int argc, const char * argv[]) {
    float num = 0;
    float *pNum= &num;
    cin >> num;
    string *str = number_to_string(pNum);
    cout << *str << endl;
    delete str;
    cout << *pNum << " " << pNum << endl;
}

string* number_to_string(float *pnum){
    string *s = new string (to_string(*pnum));
    return s;
}
