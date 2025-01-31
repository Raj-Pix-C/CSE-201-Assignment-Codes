#include <iostream>
using namespace std;

enum etype {
    labourer, secretary, manager, accountant, executive, researcher
};
class Date {
	public:
		int month, day, year;
	
		void input() {
			char slash;
			cout << "Enter join date (MM/DD/YYYY): ";
			cin >> month >> slash >> day >> slash >> year;
		}
	
		void displayDate() {
			cout << "Date: " << month << "/" << day << "/" << year << endl;
		}
};
class Employee {
	private:
		int empNumber;
		float empCompensation;
		Date joinDate;
		etype et;
	
	public:
		void input() {
			cout << "Enter employee number: ";
			cin >> empNumber;
			cout << "Enter employee compensation: ";
			cin >> empCompensation;
			cout << "Enter employee type (first letter only) labourer, secretary, manager, accountant, executive, researcher): ";
			char ch;
			cin >> ch;
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
				break;
			}
			joinDate.input();
		}
		void displayInfo() {
			cout << "Employee Number: " << empNumber << ", Compensation: $" << empCompensation << endl;
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
		joinDate.displayDate();
	}
};

int main() {
	Employee em[3];
	int c = 0;

	while(c != 3){
		em[c].input();
		c++;
	}
	c = 0;
	while(c != 3){
		em[c].displayInfo();
		c++;
	}
	return 0;
}