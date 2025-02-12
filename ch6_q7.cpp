#include <iostream>
using namespace std;

class Angle {
private:
    int degrees;
    float minutes;
    char direction;

public:
    Angle(int deg, float min, char dir) : degrees(deg), minutes(min), direction(dir) {}
	Angle() : degrees(0), minutes(0.0), direction('N') {}

    void getAngle() {
        cout << "Enter degrees: ";
        cin >> degrees;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter direction (N, S, E, W): ";
        cin >> direction;
    }

    void display() const {
        cout << degrees << "\xF8" << minutes << "' " << direction << endl;
    }
};

int main() {
    Angle angle1(149, 34.8, 'W');
    cout << "Initialized angle: ";
    angle1.display();

    Angle angle2;
    char choice;
    do {
        angle2.getAngle();
        cout << "You entered: ";
        angle2.display();
        cout << "Do you want to enter another angle? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}