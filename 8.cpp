#include <iostream>

using namespace std;

class OldBritishCurrency {
private:
    int pounds;
    int shillings;
    int pence;

public:
    void input() {
        char dot;
        pounds = shillings = pence = 0;
        cout << "Enter amount (format: £pounds.shillings.pence): £";
        cin >> pounds >> dot >> shillings >> dot >> pence;
    }

    void display() const {
        cout << "£" << pounds << "." << shillings << "." << pence;
    }

    void Calculate(OldBritishCurrency x1, OldBritishCurrency x2){
        pence += (x1.pence+x2.pence)%
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

        total = amount1.add(amount2);

        cout << "Total is ";
        total.display();
        cout << endl;

        cout << "Do you wish to continue (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}