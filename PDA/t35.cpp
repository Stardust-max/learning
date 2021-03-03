/* Pell数列 */
#include<iostream>
using namespace std;
int pell[1000001]={1,2};

int main(){
    int n;
    cin >> n;
    int arr[n];
    int temp;
    for(int i=0; i<n; i++){
        cin >> arr[i];
	arr[i]--;
    }
    for(int i=0; i<n; i++){
	temp = arr[i];
        //cout << "arr[i]:"<<temp<<endl;
        if(temp<=1) cout << pell[i]<<endl;
	else{
	    for(int j=2; j<=temp; j++) pell[j]=2*pell[j-1]+pell[j-2];
	    cout << pell[temp] % 32767 << endl;
	}
    }
    return 0;
}


