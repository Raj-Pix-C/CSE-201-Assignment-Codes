#include <iostream>
using namespace std;

class Time{
private:
	int hour, minute, second;
	long long totalSecond;
public:
	void input(){
		char colon;
		cout << "Enter time(HH:MM:SS): ";
		cin >> hour >> colon >> minute >> colon >> second;
		totalSecond = hour*3600+minute*60+second;
	}
	void calc(Time t1, Time t2){
		totalSecond = t1.totalSecond + t2.totalSecond;
		minute = totalSecond/60;
		second = totalSecond%60;
		hour = minute/60;
		minute %= 60;
	}
	void getInfo(){
		cout << "Total time = " << hour << ":" << minute << ":" << second << endl;
	}
};
int main() {
	Time t1, t2, total;
	t1.input();
	t2.input();
	total.calc(t1, t2);
	total.getInfo();
	return 0;
}