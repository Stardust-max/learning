#include<iostream>
using namespace std;
char s[100001]={0};

int main(){
    int i,j;
    fgets(s, 100001, stdin);
    for(i=0; i<sizeof(s); i++){
        char temp=s[i];
	for(j=i+1; j<sizeof(s); j++)
	    if(s[j] == temp) break;
	    else if(j==sizeof(s)-1){
	        cout << temp;
		return 0;
	    }
    }
}
