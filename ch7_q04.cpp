#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
private:
    int id;
	int Max(vector<int>& v, int size){
		int temp = INT_MIN;
		for(int i=0;i<size;++i)
			v[i]>temp?(temp=v[i],id=i):temp=temp;
		return temp;
	}
public:
	void maxint(vector<int>& v,int size){
		cout << Max(v, size) << " at index " << id;
	}

};
int main() {
	int n;
	cin >> n;

	vector<int> vec(n);
	for(auto& x : vec) cin >> x;

	Solution sol;
	sol.maxint(vec, n);

	return 0;
}