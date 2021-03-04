/* 统计数字字符个数 */
#include<iostream>
using namespace std;

int main(){
    char s[256]={0};//初始化置零一定要记住!这里如果没有={0},结果不可预料
    fgets(s, 256, stdin);
    int n=sizeof(s);
    int num=0;
    for(int i=0; i<n; i++){
        if(s[i]>=48 && s[i]<=57)num++;
	cout << s[i];
    }
    cout << num;
    return 0;	
}
