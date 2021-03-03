#include<iostream>
using namespace std;

int main(){
    int L, M;
    cin >> L >> M;
    int*tree;
    tree=(int*)malloc(sizeof(int)*(L+1)); //注意审题，题目中说了，数轴0和L两个位置处都有树，也就是说有L+1颗树！
    for(int i=0; i<=L; i++) *(tree+i)=1;
    /*int(*arr)[2]=(int(*)[2])malloc(sizeof(int)*M*2);
    for(int i=0; i<M; i++){
        for(int j=0; j<2; j++) cin >> arr[i][j];
    }*/
    for(int i=0; i<M; i++){
      	int start;
	int end;
	cin >> start >> end;
	for(int j=start; j<=end;j++) *(tree+j)=0;
    }
    int n=0;
    for(int i=0; i<=L; i++) if(*(tree+i)==1)++n;//此处的遍历要到L位置，原因同上
    cout << n << endl;
    free(tree);
    return 0; 
}
