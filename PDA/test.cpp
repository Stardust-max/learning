#include <iostream>
using namespace std;
int main(){
int a = 0,b = 10, c;

c = a++;

c = ++b;

cout << a << "," << b << "," << c << endl;
    return 0;
}