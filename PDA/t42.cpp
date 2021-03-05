#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int i;
    char temp1, temp2, temp3;
    const char *out[N];
    for(i=0; i<N; i++){
        cin >> temp1;
	//cout << temp1;
	while(1){
	    temp2=getchar();
	    if(temp2 ==' ') break;
	}
	cin >> temp2;
	//cout << temp2 << endl;
	while(1){
            temp3=getchar();
            if(temp3 =='\n') break;
         }
	if(temp1=='R' && temp2=='S') out[i]="Player1";
	else if(temp1=='R' && temp2=='P') out[i]="Player2";
	else if(temp1=='S' && temp2=='P') out[i]="Player1";
	else if(temp1=='S' && temp2=='R') out[i]="Player2";
	else if(temp1=='P' && temp2=='R') out[i]="Player1";
	else if(temp1=='P' && temp2=='S') out[i]="Player2";
	else out[i]="Tie";

    }
    for(i=0; i<N; i++){
        cout << out[i] <<endl;
    }
    return 0;
}
