#include <iostream>
using namespace std;

class OldBritishCurrency {
private:
    int pounds;
    int shillings;
    int pence;

public:
    OldBritishCurrency(int total) : pounds(0), shillings(0) {
		pence = total*2.4;
	}
    void display() const {
        cout << "£" << pounds << "." << shillings << "." << pence;
    }
    void Calculate() {
        shillings = pence/12;
		pence %= 12;
		pounds = shillings/20;
		shillings %= 20;
    }
};

class NewBritishCurrency{
private:
	double pound;	
public:
	int pence;
	void input(){
		cout << "Enter amount in the format(£pound.pence): ";
		cin >> pound;
	}
	void calc(){
		pence = pound * 100;
	}
};
int main() {
    NewBritishCurrency amount;
	amount.input();
	amount.calc();

	OldBritishCurrency result(amount.pence);
	result.Calculate();
	result.display();
    return 0;
}