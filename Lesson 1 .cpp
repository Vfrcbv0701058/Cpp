#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num_1, num_2, sum;
    cin>> num_1;
    cin >> num_2;
    sum= num_1/num_2;
    cout<<num_1<<"/"<<num_2<<"="<<sum<<endl;
    
    if(sum == 0){
        sum ++;
        cout<<"if"<<endl;
    }
    else if (sum>0){
        cout<<"Elvse if"<<endl;
    }else{
        cout<<"else"<<endl;
    }

    return 0;
}
