#include <iostream>
using namespace std;

class TollBooth {
private:
    unsigned int totalCars;
    double totalCash;

public:
    TollBooth() : totalCars(0), totalCash(0.0) {}

    void payingCar() {
        totalCars++;
        totalCash += 0.50;
    }

    void nopayCar() {
        totalCars++;
    }

    void display() const {
        cout << "Total cars: " << totalCars << endl;
        cout << "Total cash: $" << totalCash << endl;
    }
};

int main() {
    TollBooth booth;
    char ch;

    cout << "Press 'p' for paying car, 'n' for nonpaying car, 'Esc' to exit and display totals." << endl;

    while (true) {
        ch = cin.get();
        if (ch == 27) {
            break;
        } else if (ch == 'p') {
            booth.payingCar();
        } else if (ch == 'n') {
            booth.nopayCar();
        }
    }

    booth.display();
    return 0;
}