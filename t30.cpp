#include<iostream>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    double age1,age2,age3,age4;
    double*arr;
    arr=(double*)malloc(sizeof(double)*n);
    for(int i=0; i<n; i++) scanf("%lf",(arr+i));
    for(int i=0; i<n; i++){
        if(*(arr+i) >= 0 && *(arr+i) <= 18) age1++;
        if(*(arr+i) >= 19 && *(arr+i) <= 35) age2++;
        if(*(arr+i) >= 36 && *(arr+i) <= 60) age3++;
        if(*(arr+i) >= 61) age4++;	
    }
    printf("%.2f%%\n", 100*age1/n);
    printf("%.2f%%\n", 100*age2/n);
    printf("%.2f%%\n", 100*age3/n);
    printf("%.2f%%\n", 100*age4/n);
    free(arr);
    return 0;
}
