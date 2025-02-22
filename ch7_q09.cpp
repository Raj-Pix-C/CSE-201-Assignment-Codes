#include <iostream>
#define MX 10
using namespace std;

class Queue{
private:
	int left, right;
	int * queue;
public:
	Queue():left(-1), right(-1), queue(new int[MX]){};
	~Queue(){
		delete[] queue;
	}

	void put(int val){
		if(left == -1)left++;
		if((left==0&&right==MX-1)){cout << "Overflow!\n";}
		if(right == MX-1)right = -1;
		queue[++(right)] = val;
	}
	int get(){
		if(right+1==left){cout << "Underflow!\n";return -1;}
		return queue[(left)++];
	}
};


int main() {
	Queue q;
	q.put(2);
	q.put(1);
	cout << q.get() << "\n" << q.get() << "\n" << q.get();
	return 0;
}