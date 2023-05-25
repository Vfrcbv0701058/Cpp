#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int year_of_birth;

public:
    Person(const string& n, int yob) : name(n), year_of_birth(yob) {}

    virtual void print(ostream& os) const {
        os << "Person: " << name << " (born in " << year_of_birth << ")";
    }
};

class Worker : public Person {
protected:
    double salary;

public:
    Worker(const string& n, int yob, double s) : Person(n, yob), salary(s) {}

    void print(ostream& os) const override {
        os << "Worker: " << name << " (born in " << year_of_birth << "), Salary: $" << salary;
    }

    double get_salary() const {
        return salary;
    }
};

class Manager : public Worker {
    string dept;

public:
    Manager(const string& n, int yob, double s, const string& d) : Worker(n, yob, s), dept(d) {}

    void print(ostream& os) const override {
        os << "Manager: " << name << " (born in " << year_of_birth << "), Salary: $" << salary << ", Department: " << dept;
    }

    string get_dept() const {
        return dept;
    }
};

ostream& operator<<(ostream& os, const Person& obj) {
    obj.print(os);
    return os;
}

int main() {
    Person person("John Doe", 1985);
    Worker worker("Jane Smith", 1990, 5000.0);
    Manager manager("David Johnson", 1982, 8000.0, "Sales");

    cout << person << endl;
    cout << worker << endl;
    cout << manager << endl;

    return 0;
}

