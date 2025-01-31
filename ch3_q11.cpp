#include <iostream>

using namespace std;

class OldBritishCurrency {
private:
    int pounds;
    int shillings;
    int pence;

public:
    OldBritishCurrency() : pounds(0), shillings(0), pence(0) {}

    void input() {
        char dot;
        cout << "Enter amount (format: £pounds.shillings.pence): £";
        cin >> pounds >> dot >> shillings >> dot >> pence;
    }

    void display() const {
        cout << "£" << pounds << "." << shillings << "." << pence;
    }

    void Add(const OldBritishCurrency& x1, const OldBritishCurrency& x2) {
        pence = x1.pence + x2.pence;
        shillings = x1.shillings + x2.shillings + pence / 12;
        pounds = x1.pounds + x2.pounds + shillings / 20;
        pence %= 12;
        shillings %= 20;
    }
	void Sub(const OldBritishCurrency& x1, const OldBritishCurrency& x2) {
		
		bool shB = 0;
		bool pB = 0;
        pence = x1.pence - x2.pence;
		if(pence < 0){
			pence += 12;
			shB = 1;
		}
        shillings = x1.shillings - (x2.shillings + shB);
		if(shillings < 0){
			shillings += 20;
			pB = 1;
		}
        pounds = x1.pounds - (x2.pounds + pB);        
    }
	void Prod(const OldBritishCurrency& x1){
		float y;
		cout << "Product with: ";
		cin >> y;
		cout << endl;

		pence = x1.pence * y;
		float temp =(float)((x1.shillings+pence/12)*y)-(int)(shillings=((x1.shillings+pence/12)*y));
		pence += temp*12;
        temp = (float)((x1.pounds+shillings/20)*y)-(int)(pounds=((x1.pounds+shillings/20)*y));
		shillings += temp*20;
		pence%=12;
		shillings%=20;      
	}
};

int main() {
    OldBritishCurrency amount1, amount2, total;

    int choice;
	cout << "Type 1 for Addition\n     2 for Subtraction\n     3 for Multiplication: ";
	cin >> choice;

	if(choice == 1){
		cout << "Enter first amount: ";
        amount1.input();

        cout << "Enter second amount: ";
        amount2.input();

		total.Add(amount1, amount2);
        cout << "Total is ";
        total.display();
        cout << endl;
	}
	else if(choice == 2){
		cout << "Make sure first amount is larger than second amount\n" << "Enter first amount: ";
        amount1.input();

        cout << "Enter second amount: ";
        amount2.input();

		total.Sub(amount1, amount2);
        cout << "Total is ";
        total.display();
        cout << endl;
	}
	else if(choice == 3){
		cout << "Enter first amount: ";
        amount1.input();

		total.Prod(amount1);
        cout << "Total is ";
        total.display();
        cout << endl;
	}
	else{
		cout << "Error" << endl;
	}

    return 0;
}
