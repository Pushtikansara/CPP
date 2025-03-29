#include<iostream>
using namespace std;

class bankaccount {
  private:
    char name[20];
    int accountno;
    int balance;  // No need to redeclare balance in methods

  public:
    void getdata();
    void deposit();
    void withdraw();
    void display();
};

// Function to get user data
void bankaccount::getdata() {
  cout << "Enter your name:\n";
  cin >> name;
  cout << "Enter your account number:\n";
  cin >> accountno;
  cout << "Enter your balance:\n";
  cin >> balance;
}

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
    bankaccount b1;
    cout << "Bank Account Details:\n";
    b1.getdata();
    b1.deposit();
    b1.withdraw();
    b1.display();
    cout<<"24ce052_pushti";
    return 0;
}
/*
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() {
	int A,B,C;
	float avg;
	cin>>A>>B>>C;
	avg=(A+B)/2;
	if(avg>C)
	{
	    cout<<"YES";
	}
	else
	{
	 cout<<"NO";
	}

	return 0;

}
*/