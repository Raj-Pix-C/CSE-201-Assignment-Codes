#include <iostream>
using namespace std;

enum etype {
    labourer, secretary, manager, accountant, executive, researcher
};

int main() {
    cout << "Enter employee type (first letter only) labourer, secretary, manager, accountant, executive, researcher): ";
    char ch;
    cin >> ch;
    etype et;
    switch (ch) {
    case 'l':
        et = labourer;
        break;
    case 's':
        et = secretary;
        break;
    case 'm':
        et = manager;
        break;
    case 'a':
        et = accountant;
        break;
    case 'e':
        et = executive;
        break;
    case 'r':
        et = researcher;
        break;
    default:
        cout << "Invalid input" << endl;
        return 1;
    }
    cout << "Employee type is: ";
    switch (et) {
    case 0:
        cout << "labourer";
        break;
    case 1:
        cout << "secretary";
        break;
    case 2:
        cout << "manager";
        break;
    case 3:
        cout << "accountant";
        break;
    case 4:
        cout << "executive";
        break;
    case 5:
        cout << "researcher";
        break;
    }cout << endl;
    return 0;
}