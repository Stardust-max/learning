#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int h = 0;
    for(int i = 0; i < n; i++){
    	int p1, p2;
    	cin >> p1 >> p2;
    	if(p1 >= 90 && p1 <= 140 && p2 >= 60 && p2 <= 90) h++;
    	else h = 0;
	}
	cout << h << endl;    
    return 0;
}