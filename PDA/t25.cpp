#include <iostream>
using namespace std;

int main(void){
    int M, N, X;
    cin >> M >> N >> X;
    int m,n;
    m = 0;
	n = N;
	while(X--){//应该用X--，如果X==0，直接跳出循环
		//while(m < M){此处的while循环是不必要的，因为每次结束后m均==0，m<M是必然的	
		m += n;
		//}
		//if (m > M) m = M;此处的m=M和后面的for循环都是不必要的，直接考虑进行战斗的结果是战斗力增加M/n即可
		//for(int i = 1; i <= M/n; i++){
		if( m>=M ){
			n += M/n;
			m = 0;
		} 		
		//}
	}
	cout << n << endl;
	return 0;
}