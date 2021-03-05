#include<iostream>
using namespace std;

int main(){
    const char *p1="Player1";
    const char *p2="Player2";
    int N;
    cin >> N;
    int i;
    char temp1, temp2, temp3;
    char out[N][7]={0};
    for(i=0; i<N; i++){
        cin >> temp1;
	cout << temp1;
	while(1){
	    cin >> temp2;
	    if(temp2!=' ') break;
	}
	cout << temp2;
    }
    return 0;
}
