#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int c=0, h = 0;
    for(int i = 0; i < n; i++){
    	int p1, p2;
    	cin >> p1 >> p2;
    	if(p1 >= 90 && p1 <= 140 && p2 >= 60 && p2 <= 90) h++;
    	else h = 0;
	if(c<h) c=h;
        }
    cout << c << endl;    
    return 0;
}
