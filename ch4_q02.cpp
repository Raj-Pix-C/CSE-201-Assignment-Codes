#include <iostream>
using namespace std;

class Point{
private:
	int X, Y;
public:
	void input(){
		cin >> X >> Y;
	}
	void graphicalSum(const Point a, const Point b){
		X = a.X+b.X;
		Y = a.Y+b.Y;
	}
	void getPoint(){
		cout << "Coordinates of p1+p2 are: " << X << ", " << Y << endl;
	}
};
int main() {
	Point p1, p2, p3;
	cout << "Enter coordinates for p1: ";
	p1.input();
	cout << "Enter coordinates for p2: ";
	p2.input();
	p3.graphicalSum(p1, p2);
	p3.getPoint();
	return 0;
}