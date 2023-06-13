#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;

class negative_balance_exception : public out_of_range {
public:
    negative_balance_exception(const string& message)
        : out_of_range(message) {
    }
};

class account_info {
private:
    string accno;
    string customer;
    double balance;
public:
    account_info(const string& accno, const string& customer, double balance)
        : accno(accno), customer(customer), balance(balance) {
    }
    
    void print() const {
        cout << left << setw(10) << accno
             << setw(20) << customer
             << setw(10) << balance << endl;
    }
    
    void check_balance() const {
        if (balance < 0) {
            throw negative_balance_exception("Negative Balance: " + to_string(balance));
        }
    }
};

int main() {
    vector<account_info> accounts = {
        account_info("1000", "Owner 0", 7966.92),
        account_info("1001", "Owner 1", 4078.99),
        account_info("1002", "Owner 2", -966.85),
        account_info("1003", "Owner 3", 2037.64),
        account_info("1004", "Owner 4", -696.01)
    };
    
    cout << left << setw(10) << "ACCO"
         << setw(20) << "CUSTOMER"
         << setw(10) << "BALANCE" << endl;
    
    for (const auto& account : accounts) {
        account.print();
    }
    
    cout << "---------------------------------------" << endl;
    
    for (const auto& account : accounts) {
        try{
        account.check_balance();
        }catch (const negative_balance_exception& ex) {
            cout << ex.what() << endl;
        }
    }
    return 0;
}
