#include <iostream>
using namespace std;

class Date {
public:
    int month, day, year;

    void input() {
        char slash;
        cout << "Enter date (MM/DD/YYYY): ";
        cin >> month >> slash >> day >> slash >> year;
    }

    void display() {
        cout << "Date: " << month << "/" << day << "/" << year << endl;
    }
};

int main() {
    Date date;

    date.input();
    date.display();

    return 0;
}