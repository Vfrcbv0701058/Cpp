#include <iostream>
#include <string>
using namespace std;

class MSG {
private:
    string msg;
public:
    MSG(string msg): msg(msg){}
    
    virtual string GetMsg(){
        return msg;
    }
};

class BraketsMsg: public MSG {
public:
    BraketsMsg(string msg): MSG(msg){
        
    }
    
    string GetMsg() override{
        return "[" + MSG::GetMsg() + "]";
    }
};

class Printer {
public:
    void Print (MSG *msg){
        cout << msg->GetMsg() << endl;
    }
};

int main (){
    BraketsMsg fd ("wfef");
    Printer a;
    a.Print(&fd);
}
