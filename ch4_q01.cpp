#include <iostream>
#include<string>
#include<regex>
using namespace std;

class Phone
{
private:
	int area, exchange, number;
	string owner;
public:
	Phone(string Owner){
		owner = Owner;
	}
	void input(){
		string s;
		regex pattern1("^[0-9]{3}$");
		cin >> s;
		if(regex_match(s, pattern1)){
			area = stoi(s);
		}
		s.clear();
		cin >> s;
		if(regex_match(s, pattern1)){
			exchange = stoi(s);
		}
		s.clear();
		regex pattern2("^[0-9]{4}$");
		cin >> s;
		if(regex_match(s, pattern2)){
			number = stoi(s);
		}
		s.clear();
	}
	void set(){
		area = 212;
		exchange = 767;
		number = 8900;
	}
	void printNum(){
		cout << owner << " number is ";
		getArea();
	}
	void getArea(){
		cout << "(" << area << ") ";
		getRest();
	}
	void getRest(){
		cout << exchange << "-" << number << endl;
	}
};

int main() {
	Phone phn1("MY"), phn2("Your");

	cout << "Enter your area code, exchange, and number: ";
	phn1.set();
	phn2.input();
	phn1.printNum();
	phn2.printNum();
	return 0;
}