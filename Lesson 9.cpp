#include <iostream>
using namespace std;

struct Date {
    int age;
};
struct Auto{
    int wheels;
    float speed;
    char color;
    Date awto;
};

int main(int argc, const char * argv[]) {
    Auto shkoda;
    shkoda.color = 'r';
    shkoda.speed = 215.3;
    shkoda.wheels = 4;
    Auto audi ={4,354, 'b', 43};
    
    cout << audi.speed<<"\n"<<shkoda.speed<<"\n"<<audi.awto.age<<endl;
}
