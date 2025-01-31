#include <iostream>
using namespace std;

int main() {
	
	int guests, chairs = 4;
	unsigned long long combination = 1;

	cout << "How many guests are invited?\n";
	cin >> guests;

	for(int i = 0; i < chairs; i++){
		combination *= (guests-i);
	}
	cout << "Total combiniation: " << combination << endl;
	return 0;
}
