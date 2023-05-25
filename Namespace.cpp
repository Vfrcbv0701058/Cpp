#include <iostream>
#include <string>
using namespace std;
 
namespace firstNS{
void Foo(){
    cout << "First namespace" << endl;
}
}

namespace secondNS {
void Foo(){
    cout << "Second namespace" << endl;
}
}

using namespace secondNS;

int main(){
    
    Foo();
}
