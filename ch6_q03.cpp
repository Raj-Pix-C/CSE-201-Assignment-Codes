#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;
	int det;

public:
    Time() : hours(0), minutes(0), seconds(0), det(0){}
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s), det(0){}

    void display() const {
		cout << "result :: " ;
        cout << (hours < 10 ? "0" : "") << hours << ":";
    	cout << (minutes < 10 ? "0" : "") << minutes << ":";
		cout << (seconds < 10 ? "0" : "") << seconds;
		cout << (det ? " PM" : " AM") << endl;
    }

    void add(const Time& t1, const Time& t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + seconds / 60;
        hours = t1.hours + t2.hours + minutes / 60;
        seconds %= 60;
        minutes %= 60;
		det = hours / 12;
		hours %= 12;
		if(hours == 0)hours = 12;
    }
};

int main() {
    const Time t1(11, 59, 59), t2(10, 5, 6);
    Time result;
    result.add(t1, t2);
    result.display();

    return 0;
}