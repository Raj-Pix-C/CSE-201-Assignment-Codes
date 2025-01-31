#include<iostream>
using namespace std;

int main()
{
    unsigned long long res[21] = {0}, temp;
    int c = 1;
    
    while(c){
        cout <<"Enter a number: ";
        cin >> c;
        
        if(c<=0 || c >20)return 0;
        
        if(res[c]){
            cout << "Factorial = " << res[c] << endl;
        }
        else {
        temp = 1;
            for(int i = 1; i <= c; ++i){
                temp *= i;
            }
            res[c]=temp;
            cout << "Factorial = " << res[c] << endl;
        }
    }
    return 0;
}
