#include <iostream>
using namespace std;

class Time{
private:
	int hour, minute, second;
	long long totalSecond;
public:
	Time(int h, int m, int s) : totalSecond(0){
		hour = h;
		minute = m;
		second = s;
	}
	void calc(){
		totalSecond = hour*3600+minute*60+second;
	}
	void getInfo(){
		cout << "Total seconds = " << totalSecond << endl;
	}
};
int main() {
	int x, y, z;
	char colon;
	cout << "Enter time(HH:MM:SS): ";
	cin >> x >> colon >> y >> colon >> z;
	Time time(x, y, z);
	time.calc();
	time.getInfo();
	return 0;
}