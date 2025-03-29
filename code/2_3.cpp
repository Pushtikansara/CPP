#include<iostream>
using namespace std;

class bankaccount {
  private:
    string name;
    int accountno;
    long int balance;  // No need to redeclare balance in methods

  public:
    bankaccount()
    {
     name="Unknown";
     accountno=0;
     balance=0;
    }
    bankaccount(char b_name,int b_accountno,long int b_balance)
    {
       name=b_name;
       accountno= b_accountno;
       balance=b_balance;

    }
    void deposit();
    void withdraw();
    void display();
};
// Function to deposit money
void bankaccount::deposit() {
   int d;
   cout << "\nEnter deposit value:\n";
   cin >> d;
   balance += d;  // Update the class balance
   cout << "\nYour new balance: " << balance;
}

// Function to withdraw money
void bankaccount::withdraw() {
   int w;
   cout << "\nEnter withdrawal amount:\n";
   cin >> w;
   if (w <= balance) {
     cout << "\nYou have sufficient balance.";
     balance -= w;  // Deduct from class balance
     cout << "\nYour new balance is: " << balance;
   } else {
     cout << "\nWithdraw amount exceeds balance.";
   }
}

// Function to display account details
void bankaccount::display() {
    cout << "\nName: " << name;
    cout << "\nAccount number: " << accountno;
    cout << "\nBalance: " << balance;
}

// Main function
int main() {
    int n;
    cout<<"\nNumber of accounts:";
    cin>>n;
    bankaccount b[n];

    cout << "Bank Account Details:\n";
    for(int i=0;i<n;i++)
    {
     if(i==0)
     {
       b[i]=bankaccount();
     }
     else
     {
     string name;
    int accountno;
    long int balance;
    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your account number:\n";
    cin >> accountno;
    cout << "Enter your balance:\n";
    cin >> balance;
     b[i]= bankaccount(name,balance,accountno);
     b[i].deposit();
     b[i].withdraw();

        }
    }
    return 0;
}
