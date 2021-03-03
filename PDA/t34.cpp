#include<iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int A[101][101];
    int i, j;
    for(i=0; i<m; i++)for(j=0; j<n; j++) cin >> A[i][j];
    for(i=0; i<n; i++){
	for(j=0; j<m; j++) cout << A[j][i] << " ";
	cout << endl;
    }
    return 0; 
}
