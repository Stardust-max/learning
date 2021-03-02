#include <iostream>
using namespace std;

int main(){
    int hight[10]={0};
    for(int i=0; i<10; i++) cin >> hight[i];
    int max;
    int n=0;
    cin >> max;
    for(int i=0; i<10; i++){
        if(max+30 >= hight[i]) n++; 
    }
    cout << n;
    return 0;
}
