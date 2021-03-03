#include<iostream>
using namespace std;

#define MAX 5
int main(){
    int A[MAX][MAX];
    int max;//max是所在行的最大值，所以每次行数变化时都要重置
    int max_index;
    int min;
    int min_index;//如果不在此处定义min，会出现未定义的情况
    int i, j, k;//最好先提前声明索引，不然可能会出现问题<F9>
    for(i=0; i<MAX; i++)
	for(j=0; j<MAX; j++) cin >> A[i][j];
    for(i=0; i<MAX; i++){
	max=0;
        for(j=0; j<MAX; j++){
	      if(A[i][j]>max) {
	          max = A[i][j];
		  max_index = j;
	      }
	}
	min=A[0][max_index];//min是所在列的最小值，在列（这里是已知最大时的列数）变化时重置
	for(k=0; k<MAX; k++){
                //min=A[0][max_index];在此处重置是错误的，得不到最小值，因为每次找新数之后就变了
		if(A[k][max_index]<min) {
                    min = A[k][max_index];//这里一定要用max_index，不然会报错！因为min只是声明，并未进行赋值
                    min_index = k;
                }//这里得到的min并不是最终的min，要等这个循环结束才是  
	}
	//cout<<min<<" "<<max<<endl;
	if(min == max){
	    cout<<min_index+1<<" "<<max_index+1<<" "<<A[min_index][max_index];
	    return 0;
	}//注意所在列的最小是一个行数，所在行的最小是一个列数
    /*if(max == min) cout<<max_index+1<<" "<<min_index+1<<" "<<A[max_index][min_index];
    else cout<<"not found";这里的if是错误的，因为上面的循环最后min和max一定会找到最后的一行一列*/
    }
    cout<<"not found"<<endl;
    return 0;
}
	
   
