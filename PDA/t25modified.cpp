#include <iostream>
using namespace std;

int main(void){
    int M, N, X;
    cin >> M >> N >> X;
    int m,n;
    m = 0;
	n = N;
	while(X--){
		m += n;
		if(m >= M){
            n += M/n;
            m = 0;
            cout << n << endl;
        }
	}
	cout << n << endl;
	return 0;
}