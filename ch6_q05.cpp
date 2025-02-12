#include <iostream>
using namespace std;

class Date {
private:
    int month, day, year;

public:
    void getdate() {
        char slash;
        cout << "Enter date (MM/DD/YYYY): ";
        cin >> month >> slash >> day >> slash >> year;
    }

    void showdate() const {
        cout << "Date: " << month << "/" << day << "/" << year << endl;
    }
};

int main() {
    Date date;

    date.getdate();
    date.showdate();

    return 0;
}