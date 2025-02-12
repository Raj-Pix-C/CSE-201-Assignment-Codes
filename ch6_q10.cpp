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
        cout << degrees << "\xF8" << minutes << "' " << direction;
    }
};

class Ship {
private:
    static int shipCount;
    int shipNumber;
    Angle latitude;
    Angle longitude;

public:
    Ship() : shipNumber(++shipCount) {}

    void getPosition() {
        cout << "Enter latitude for ship " << shipNumber << ":" << endl;
        latitude.getAngle();
        cout << "Enter longitude for ship " << shipNumber << ":" << endl;
        longitude.getAngle();
    }

    void display() const {
        cout << "Ship number " << shipNumber << " is at latitude ";
        latitude.display();
        cout << " and longitude ";
        longitude.display();
        cout << endl;
    }
};

int Ship::shipCount = 0;

int main() {
    Ship ship1, ship2, ship3;

    ship1.getPosition();
    ship2.getPosition();
    ship3.getPosition();

    ship1.display();
    ship2.display();
    ship3.display();

    return 0;
}