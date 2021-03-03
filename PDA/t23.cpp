#include <iostream>
using namespace std;

int main(void){
    int n=0, reverse=0, temp=0;
    cin >> n;
    while(n){
    	temp = n % 10;
    	reverse = reverse * 10 + temp;
    	n = n /10;
	}
	cout << reverse<<endl;
    return 0;
}