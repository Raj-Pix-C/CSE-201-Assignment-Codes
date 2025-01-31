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
	
	cout << "Enter initial amount: ";
	cin >> start;
	cout << endl << "Enter number of years: ";
	cin >> year;
	cout << endl << "Enter interest rate (percent per year): ";
	cin >> rate;
	cout << endl;
}
	void calculate(){
		cout << "At the end of " << year << " years, you will have "<< start*pow((1+rate/100), year) <<" dollars." ;
	}
};

int main() {
	Investment inv1;
	inv1.input();
	inv1.calculate();
	return 0;
}
