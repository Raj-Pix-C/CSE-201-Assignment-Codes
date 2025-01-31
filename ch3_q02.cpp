#include <iostream>
using namespace std;

class TempConv{
private:
	float C;
	float F;

public:
	void menu(){
		cout << "Type 1 to convert Fahrenheit to Celsius,\n     2 to convert Celsius to Fahrenheit: ";
		int choice;
		cin >> choice;
		cout << endl;

		if(choice == 1)F_to_C();
		else if(choice == 2)C_to_F();
		else cout << "Error\n";
	}
	void C_to_F(){
		cout << "Enter temperature in Celsius: ";
		cin >> C;
		cout << endl << "In Farenheit that's " << C*9.00/5.00+32 << endl;
	}
	void F_to_C(){
		cout << "Enter temperature in Fahrenheit: ";
		cin >> F;
		cout << endl << "In Celsius that's " << 5.00*(F-32)/9.00 << endl;
	}
};

int main() {
	TempConv op;
	op.menu();
	return 0;
}
