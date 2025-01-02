// Links to the lessons
// https://finki-mk.github.io/OOP/html5/oop_av7.html

// https://bbb-lb.finki.ukim.mk/playback/presentation/2.3/740dc1184c44f2d100ce97a5038744c4cd34f22a-1650458798901

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

class DebitAccount {
protected:
    char owner[50];
    char accountNumber[16];
    double balance;

public:
    DebitAccount(char *owner = "no owner", char *accountNumber = "111111111111111", double balance = 0.0) {
        strcpy(this->owner, owner);
        strcpy(this->accountNumber, accountNumber);
        this->balance = balance;
    }

    DebitAccount(const DebitAccount &da) {
        strcpy(this->owner, da.owner);
        strcpy(this->accountNumber, da.accountNumber);
        this->balance = da.balance;
    }


    void printReport() {
        cout << "Owner: " << owner << endl;
        cout << "AccountNumber: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Error: amount not enough to withdraw. Withdrawing all the money: " << balance << endl;
            balance = 0;
        }
    }
};


class CreditAccount : public DebitAccount {
private:
    double limit;
    const double interest = 0.05;
    double debt;

public:
    CreditAccount(char *owner = "no owner", char *accountNumber = "111111111111111", double balance = 0.0,
                  double limit = 10000) : DebitAccount(owner, accountNumber, balance) {
        this->limit = limit;
        //this->debt =
    }
};

int main() {
    DebitAccount db("Donik");
    db.printReport();
    DebitAccount db1("Donik", "123451234512345");
    db1.printReport();
    DebitAccount db2("Donik", "123451234512345", 1005.45);
    db2.printReport();
    db2.withdraw(2000);
    return 0;
}
