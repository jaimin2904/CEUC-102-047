#include "Account.h"

int main() {
    Savings s;
    Current c;
    int choice, type;
    double amt;

    // initial data
    s.setData(101, 1000);
    s.setRate(5);

    c.setData(201, 2000);
    c.setLimit(500);

    do {
        cout << "\n1.Savings 2.Current 3.Exit\n";
        cin >> type;

        if (type == 1) {
            cout << "\n1.Deposit 2.Withdraw 3.Display 4.Interest\n";
            cin >> choice;

            switch (choice) {
            case 1:
                cin >> amt;
                s.deposit(amt);
                break;
            case 2:
                cin >> amt;
                s.withdraw(amt);
                break;
            case 3:
                s.display();
                break;
            case 4:
                s.addInterest();
                break;
            }
        }
        else if (type == 2) {
            cout << "\n1.Deposit 2.Withdraw 3.Display\n";
            cin >> choice;

            switch (choice) {
            case 1:
                cin >> amt;
                c.deposit(amt);
                break;
            case 2:
                cin >> amt;
                c.withdraw(amt);
                break;
            case 3:
                c.display();
                break;
            }
        }

    } while (type != 3);

    return 0;
}