#include <iostream>
using namespace std;

int main(void){
    int i,j,k;
    int n1, n2, n3;
    for(i = 0;i < 7; i++){
    	for(j = 0; j < 7; j++){
    		for(k = 1; k < 7; k++){
    			n1 = i * 49 + j * 7 + k;
    			n2 = k * 81 + j * 9 + i;
    			if (n1 == n2){    				
    		        n3 = n1;
				    n1 = i * 100 + j * 10 + k;
				    n2 = k * 100 + j * 10 + i;
				    cout << n3 << endl;
	                cout << n1 << endl;
	                cout << n2 << endl;
	                return 0;
				} 
				
			}
		}
	}
}