#include <iostream>
using namespace std;

class Distance{
public:
	float feet, inches;
};

class Volume{
private:
	Distance length, width, height;
	float volume;
public:
	void input(){
		cout << "Enter length, width, height in the following format(feet inches):";
		cin >> length.feet >> length.inches >> width.feet >> width.inches >> height.feet >> height.inches;
	}
	void CalVolume(){
		volume = ((length.feet+length.inches/12)*(width.feet+width.inches/12)*(height.feet+height.inches/12));
	}
	void getVolume(){
		cout << "Volume is : " << volume << endl;
	}
};
int main() {
	Volume room;

	room.input();
	room.CalVolume();
	room.getVolume();
	return 0;
}