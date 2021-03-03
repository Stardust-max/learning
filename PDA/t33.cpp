#include<iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int A[m][n];
    int B[m][n];
    int i, j;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){ 
	    cin >> A[i][j];
	    B[i][j]=A[i][j];
	}
    }
    if(m<3 || n<3){
        for(i=0; i<m; i++) {
	    for(j=0; j<n; j++){
	        cout << A[i][j] << " ";
	    } 
	    cout<<endl;
	}
    }
    else{
        for(i=1; i<m-1; i++){
	    for(j=1; j<n-1; j++){
	        B[i][j]=(A[i-1][j]+A[i][j-1]+A[i][j]+A[i][j+1]+A[i+1][j])/5;
	    }
	}
	for(i=0; i<m; i++) {
              for(j=0; j<n; j++){
                  cout << B[i][j] << " ";
              }
              cout<<endl;
          }

    }
    return 0;
}
