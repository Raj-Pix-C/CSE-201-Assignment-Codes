#include <iostream>
using namespace std;

class Fraction{
private:
	int num, denum;
public:
	void input(){
		cout << "Enter fraction in following manner(a/b): ";
		char slash;
		cin >> num >> slash >> denum;
	}
	void display(){
		char slash;
		cout << num << slash << denum;
	}
	void calc(Fraction n1, Fraction n2){
		num = n1.num*n2.denum+n2.num*n1.denum;
		denum = n1.denum*n2.denum;
	}
};
int main() {
	Fraction f1, f2, result;
	f1.input();
	f2.input();
	result.calc(f1, f2);
	result.display();
	return 0;
}