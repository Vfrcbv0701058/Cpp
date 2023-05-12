#include <iostream>
#include <string>
using namespace std;

class Human{
private:
    string name = "Ivan";
public:
    string GetName(){
        return name;
    }
    
    void SetName(string name){
        this -> name = name;
    }
};

class Student : public Human{
public:
    string group;
    void Learn(){
        cout << "I'm learning!" << endl;
    }
    
};

class ExtramuralStudent : public Student{
public:
    void Learn(){
        cout << "I'm not learning now!" << endl;
    }
};

class Professor : public Human{
public:
    string subjekt;
};





int main(){
    Student st;
    st.Learn();
    cout << st.GetName() << endl;
    st.SetName("Maksym");
    
    cout << st.GetName() << endl;
    ExtramuralStudent stu;
    stu.Learn();
    return 0;
}
    
