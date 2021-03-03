#include<iostream>
using namespace std;

int main()
{
    int N;
	cin >> N;
	int i;
	int arr[N];
	for(i=0;i<N;i++){
		cin >> arr[i];
	}
	int m;
	cin >> m;
	int temp=0;
	for(i=0;i<N;i++){
		if(arr[i]==m) temp++;
	}
	cout << temp;
	return 0;
}