#include <iostream>

using namespace std;

class OldBritishCurrency {
private:
    int pounds;
    int shillings;
    int pence;

public:
    OldBritishCurrency() : pounds(0), shillings(0), pence(0) {}

    void input() {
        char dot;
        cout << "Enter amount (format: £pounds.shillings.pence): £";
        cin >> pounds >> dot >> shillings >> dot >> pence;
    }

    void display() const {
        cout << "£" << pounds << "." << shillings << "." << pence;
    }

    void Calculate(const OldBritishCurrency& x1, const OldBritishCurrency& x2) {
        pence = x1.pence + x2.pence;
        shillings = x1.shillings + x2.shillings + pence / 12;
        pounds = x1.pounds + x2.pounds + shillings / 20;
        pence %= 12;
        shillings %= 20;
    }
};

int main() {
    char choice;
    do {
        OldBritishCurrency amount1, amount2, total;

        cout << "Enter first amount: ";
        amount1.input();

        cout << "Enter second amount: ";
        amount2.input();

        total.Calculate(amount1, amount2);

        cout << "Total is ";
        total.display();
        cout << endl;

        cout << "Do you wish to continue (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
