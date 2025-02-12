#include <iostream>
using namespace std;

class Employee {
private:
    int empNum;
    float empComp;

public:
    void input() {
        cout << "Enter employee number: ";
        cin >> empNum;
        cout << "Enter employee compensation: ";
        cin >> empComp;
    }

    void display() const {
        cout << "Employee Number: " << empNum << ", Compensation: $" << empComp << endl;
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