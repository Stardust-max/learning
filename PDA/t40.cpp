/* 统计数字字符个数 */
#include<iostream>
using namespace std;

int main(){
    char s[256];
    fgets(s, 256, stdin);
    int n=sizeof(s);
    int num=0;
    for(int i=0; i<n; i++){
        if(s[i]>=48 && s[i]<=57)num++;
    }
    cout << num;
    return 0;	
}
