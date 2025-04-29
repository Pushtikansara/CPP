#include <iostream>
#include <vector>
using namespace std;

// Base class
class BankAccount {
protected:
    int accountNumber;
    double balance;
    vector<double> transactions; // To store transaction history

public:
    BankAccount(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
        cout << "BankAccount created.\n";
    }

    virtual ~BankAccount() {
        cout << "BankAccount closed for account number: " << accountNumber << endl;
    }

    void deposit(double amount) {
        balance += amount;
        transactions.push_back(amount); // positive for deposit
        cout << "Deposited: " << amount << endl;
    }

    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            transactions.push_back(-amount); // negative for withdrawal
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Not enough balance.\n";
        }
    }

    void showBalance() const {
        cout << "Account No: " << accountNumber << ", Balance: " << balance << endl;
    }

    void undoLastTransaction() {
        if (transactions.empty()) {
            cout << "No transaction to undo.\n";
            return;
        }
        double lastTransaction = transactions.back();
        balance -= lastTransaction; // reverse the last transaction
        transactions.pop_back();
        cout << "Last transaction undone.\n";
    }
};

// Derived class for Savings Account
class SavingsAccount : public BankAccount {
private:
    double interestRate; // as percentage
public:
    SavingsAccount(int accNo, double bal, double rate)
        : BankAccount(accNo, bal), interestRate(rate) {
        cout << "SavingsAccount created with interest rate: " << interestRate << "%\n";
    }

    ~SavingsAccount() {
        cout << "SavingsAccount closed.\n";
    }

    void addInterest() {
        double interest = balance * (interestRate / 100);
        deposit(interest);
        cout << "Interest added: " << interest << endl;
    }
};

// Derived class for Current Account
class CurrentAccount : public BankAccount {
private:
    double overdraftLimit;
public:
    CurrentAccount(int accNo, double bal, double limit)
        : BankAccount(accNo, bal), overdraftLimit(limit) {
        cout << "CurrentAccount created with overdraft limit: " << overdraftLimit << "\n";
    }

    ~CurrentAccount() {
        cout << "CurrentAccount closed.\n";
    }

    void withdraw(double amount) override {
        if (balance + overdraftLimit >= amount) {
            balance -= amount;
            transactions.push_back(-amount);
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Withdrawal exceeds overdraft limit.\n";
        }
    }
};

int main() {
    cout << "\n--- Savings Account ---\n";
    SavingsAccount sAcc(101, 5000, 5); // account number, balance, interest rate
    sAcc.showBalance();
    sAcc.deposit(1000);
    sAcc.withdraw(2000);
    sAcc.addInterest();
    sAcc.showBalance();
    sAcc.undoLastTransaction();
    sAcc.showBalance();

    cout << "\n--- Current Account ---\n";
    CurrentAccount cAcc(102, 2000, 1000); // account number, balance, overdraft limit
    cAcc.showBalance();
    cAcc.deposit(500);
    cAcc.withdraw(3000); // allowed because of overdraft
    cAcc.showBalance();
    cAcc.undoLastTransaction();
    cAcc.showBalance();

    return 0;
}
