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
        cout << month << "/" << day << "/" << year;
    }
};

enum etype { laborer, secretary, manager, accountant, executive, researcher };

class Employee {
private:
    int empNum;
    float empComp;
    Date hireDate;
    etype empType;

public:
    void input() {
        char type;
        cout << "Enter employee number: ";
        cin >> empNum;
        cout << "Enter employee compensation: ";
        cin >> empComp;
        cout << "Enter date of first employment: ";
        hireDate.getdate();
        cout << "Enter employee type (first letter only - laborer, secretary, manager, accountant, executive, researcher): ";
        cin >> type;
        switch (type) {
            case 'l': empType = laborer; break;
            case 's': empType = secretary; break;
            case 'm': empType = manager; break;
            case 'a': empType = accountant; break;
            case 'e': empType = executive; break;
            case 'r': empType = researcher; break;
            default: cout << "Invalid type. Setting to laborer by default." << endl; empType = laborer;
        }
    }

    void display() const {
        cout << "Employee Number: " << empNum << ", Compensation: $" << empComp << ", Hire Date: ";
        hireDate.showdate();
        cout << ", Employee Type: ";
        switch (empType) {
            case 0: cout << "laborer"; break;
            case 1: cout << "secretary"; break;
            case 2: cout << "manager"; break;
            case 3: cout << "accountant"; break;
            case 4: cout << "executive"; break;
            case 5: cout << "researcher"; break;
        }
        cout << endl;
    }
};

int main() {
    Employee emp1, emp2, emp3;

    cout << "Enter details for employee 1:" << endl;
    emp1.input();
    cout << "Enter details for employee 2:" << endl;
    emp2.input();
    cout << "Enter details for employee 3:" << endl;
    emp3.input();

    cout << "\nEmployee details:" << endl;
    emp1.display();
    emp2.display();
    emp3.display();

    return 0;
}