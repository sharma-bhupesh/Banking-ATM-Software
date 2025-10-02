#include <iostream>
#include <iomanip>
using namespace std;

int realPin = 1327;
double balance = 0;

void depositFunds();
void withdrawFunds();

int main() {
    int guessPin;
    int option;

    cout << "Welcome to Apna Bank.\n\n";
    cout << "Please enter your pin or type 0000 to exit: ";

    while (true) {        
        cin >> guessPin;
        if (guessPin == 0000) {
            cout << "\nThank you for banking with us. Goodbye.\n\n";
            return 0;
        } else if (guessPin == realPin) {
            cout << "PIN is correct. Proceeding to main menu.\n\n";
            break;
        } else {
            cout << "Invalid PIN. Please try again. Enter your pin or type 0000 to exit: ";
        }
    }

    while (true) {
        cout << "Please select one of the following options:\n\n";
        cout << "1) View your current balance.\n";
        cout << "2) Deposit funds into your account.\n";
        cout << "3) Withdraw funds from your account.\n";
        cout << "4) Exit.\n\n";
       
        cin >> option;

        switch (option) {
            case 1:
                cout << "Your current balance is: $" << setprecision(2) << fixed << balance << ".\n\n";
                break;
            case 2:
                depositFunds();
                break;
            case 3:
                withdrawFunds();
                break;
            case 4:
                cout << "Thank you for banking with us. Goodbye.\n\n";
                return 0;
            default:
                cout << "Invalid selection. Please try again.\n\n";
                continue;
        }
    }

    return 0;
}

void depositFunds() {
    double limit = 9999.00;
    double amountToDeposit;
    cout << "You may withdraw any amount up to $" << limit << ".\n";
    cout << "To go back to the main menu, you may select $0.\n";
    cout << "Please enter how much you would like to deposit: $\n";
    cin >> amountToDeposit;

    if (amountToDeposit == 0) {
        cout << "Returning to main menu...\n\n";
    } else if (amountToDeposit > limit || amountToDeposit < 0) {
        cout << "Error. You may only deposit an amount between $0.01 and $" << limit << ".\n";
        depositFunds();
    } else {
        balance = balance + amountToDeposit;
        cout << "You have deposited $" << amountToDeposit << ". Your current balance is $" << setprecision(2) << fixed << balance << ".\n\n";
    }
}

void withdrawFunds() {
    double amountToWithdraw;
    cout << "You may withdraw any amount up to and including your current balance, which is $" << setprecision(2) << fixed << balance << ".\n";
    cout << "To go back to the main menu, you may select $0.\n";
    cout << "Please enter how much you would like to withdraw: $ \n";
    cin >> amountToWithdraw;

    if (amountToWithdraw == 0) {
        cout << "Returning to main menu...\n\n";
    } else if (amountToWithdraw > balance || amountToWithdraw < 0) {
        cout << "Error. You may only withdraw an amount between $0.01 and your current bank balance.\n\n";
        withdrawFunds();
    } else {
        balance = balance - amountToWithdraw;
        cout << "You have withdrawn $" << amountToWithdraw << ". Your current balance is $" << setprecision(2) << fixed << balance << ".\n\n";
    }
}