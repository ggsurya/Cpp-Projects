#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

class Account
{
private:
    string name;
    int accountNumber;
    double balance;

public:
    void createAccount()
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\n--- Create New Account ---\n";
        cout << "Enter account holder name: ";
        getline(cin, name);
        cout << "Enter account number: ";
        cin >> accountNumber;
        balance = 0;
        cout << "\nAccount created successfully!\n\n";
    }

    void deposit()
    {
        double amount;
        cout << "\n--- Deposit Amount ---\n";
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully.\n\n";
        }
        else
        {
            cout << "Invalid amount! Deposit failed.\n\n";
        }
    }

    void withdraw()
    {
        double amount;
        cout << "\n--- Withdraw Amount ---\n";
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful.\n\n";
        }
        else
        {
            cout << "Invalid amount or insufficient balance!\n\n";
        }
    }

    void showBalance() const
    {
        cout << "\n--- Account Details ---\n";
        cout << "Account holder: " << name << "\n";
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Current Balance: $" << balance << "\n\n";
    }

    int getAccountNumber() const
    {
        return accountNumber;
    }
};

int main()
{
    vector<Account> accounts;
    int choice;

    do
    {
        cout << "===== Simple Banking System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Show Balance\n";
        cout << "5. Exit\n";
        cout << "Select an option (1-5): ";
        cin >> choice;

        if (choice == 1) 
        {
            Account newAccount;
            newAccount.createAccount();
            accounts.push_back(newAccount);
        }
        else if (choice >= 2 && choice <= 4)
        {
            if (accounts.empty())
            {
                cout << "\nNo accounts found! Please create an account first.\n\n";
                continue;
            }

            int accNo;
            cout << "\nEnter account number: ";
            cin >> accNo;

            bool found = false;
            for (auto &acc : accounts)
            {
                if (acc.getAccountNumber() == accNo)
                {
                    found = true;
                    if (choice == 2) acc.deposit();
                    else if (choice == 3) acc.withdraw();
                    else acc.showBalance();
                    break;
                }
            }
            if (!found)
                cout << "\nAccount not found!\n\n";
        }
        else if (choice != 5)
        {
            cout << "\nInvalid choice! Please select a valid option (1-5).\n\n";
        }
    } while (choice != 5);

    cout << "\nThank you for using the Simple Banking System.\n";
    return 0;
}
