#include <iostream>
#include <cmath>

using namespace std;

class Investment{
private:
	float start;
	float final;
	int year;
	float rate;

public:
void input(){
	year = 0;
	cout << "Enter initial amount: ";
	cin >> start;
	cout << endl << "Enter final amount: ";
	cin >> final;
	cout << endl << "Enter interest rate (percent per year): ";
	cin >> rate;
	cout << endl;
}
	void calculate(){
		while(start <= final){
			start = start*(1+rate/100);
			year ++;
		}
		cout << "Required year: " << year << endl;
	}
};

int main() {
	Investment inv1;
	inv1.input();
	inv1.calculate();
	return 0;
}
