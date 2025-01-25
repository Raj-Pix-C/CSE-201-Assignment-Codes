#include <iostream>
#include<iomanip>
#include<string>
#include<valarray>
using namespace std;

class Table{
private:
	int num;

public:
	void input(){
		cout << "Enter a number: ";
		cin >> num ;
		cout << endl;
		generate();
	}
	void generate(){
		int max_num = 10*20*num;
		string s = (to_string(max_num));

		for (int i = 1; i < 21; i++){
			for (int j = 1; j < 11; j++){
				cout << setw(s.size()) << num*i*j << " ";
			}
			cout << endl;
		}		
	}
};

int main() {
	Table tbl;
	tbl.input();
	return 0;
}