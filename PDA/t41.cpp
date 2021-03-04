/* 找第一个只出现一次的字符 */
#include<iostream>
#include<string.h>
using namespace std;
char s[100001]={0};

int main(){
    int i,j;
    int letters[26]={0};
    fgets(s, 100001, stdin);
    int len=strlen(s);
    for(i=0; i<len; i++)
        letters[s[i]-'a']++;
    for(j=0; j<len; j++)
	if(letters[s[j]-'a'] == 1) {
		cout << s[j];
		return 0;
	}
	    
    cout << "no"<<endl;
    return 0;
}
/*=============================================================
 * 思路:建立一个存储26个字母出现次数的数组, 注意该数组存储字母的顺序是与输入的字符串有关的.
 * 从数组的头开始遍历,第一个等于1的字符就输出
 * 关键是想到将输入字符与26个字母匹配*/
