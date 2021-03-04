#include<iostream>
using namespace std;

int main(){
    int a, b;
    int temp = 0;
    cin >> a >> b;
    while(a%b){
        temp = a;
	a = b;
	b = temp % b;
    }
    cout << b;
    return 0;
}
