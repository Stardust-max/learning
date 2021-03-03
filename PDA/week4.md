# 4.1 break语句和continue语句

## break语句

* 可以出现在循环体中(for、while、do $\cdots$ while循环均可)，其作用是跳出循环。
* 在多重循环的情况下，break语句只能跳出直接包含它的那一重循环

​    <font face="字体" color="red">例题：</font>如果两个<font face="字体" color="blue">不同</font>的正整数，它们的和是他们的积的因子，就称这两个数为兄弟数，小的称为弟数，大的称为兄数。先后输入正整数n和m (n < m)，请在n至m这 n-m+1个数中，找出一对兄弟数。如果找不到，就输出"No Solution."。如果能找到，就找出和最小的那一对；如果有多对兄弟数和相同且都是最小，就找出弟数最小的那一对。



​    <font face="字体" color="purple">思路：</font>枚举每一对不同的数，看看是不是兄弟数。用两个变量记录当前已经找到的最佳兄弟数，如果发现更佳的，就重新记录。

```c++
#include <iostream>
using namespace std;

int main(void){
    int n, m;
    scanf("%d %d", &n, &m);
    int a = m + 1, b = m+ 1; //a, b 记录已经找到的最佳兄弟数。a是弟数，b是兄数
    for ( int i =n; i < m; ++i) { //用 i 来寻找弟数，未必是最佳数，共m-n种取法
    	if ( i > (a + b) / 2 + 1)
    	    break;  // 跳出外重循环
    	for ( int j = i + 1; j <= m; ++j){ // 取兄数
    		if (i + j > a + b)
    		    break;  //只要大于已有的最佳兄弟数，直接结束本次搜索
    		if (i * j  % (i + j) == 0){ //发现和更小的兄弟数
    			if (i + j < a + b){
    				a = i; b = j;  //更新已找到的最佳兄弟数
				}
			else if ( i + j == a + b && i < a)  //发现和更小但弟数更小的兄弟数
			    a = i; b = j;
			}
		}
	}
	printf("%d 到 %d 内的最佳兄弟数是：%d, %d\n", n, m, a, b);
    return 0;
}
```

## continue 语句

* 可以出现在循环体种(for、while、do···while循环均可)，其作用是<font face="字体" color="red">立即结束本次循环，并回到循环开头判断是否要进行下一次循环</font>。可以用于筛选

  for (int i = 1; i <= 10; ++i){

  ​    if ( i % 2)

  ​        contunue;

  ​    cout << i << ",";

  }

* 在多重循环的情况下，continue只对直接包含它的那重循环起作用



# 4.2 OJ编程题输入数据的处理

## scanf表达式的值

* scanf() 表达式的值为int，表示成功读入的变量个数。

int n, m;

printf("%d", scanf("%d%%d", &n, &m));

​     <img src="week4.assets/image-20201207170656241.png" alt="image-20201207170656241" style="zoom:25%;float:left" />

  

​    





* 注意第三例，第一次读入a失败以后就不再读取后面的内容了，即使它符合要求

* scanf()值为<font color='red'>EOF</font>(即-1)则说明输入数据已经结束。EOF是定义在stdio.h中的符号常量
  * Windows系统下输入 Ctrl + Z
  * Mac或Linux下是Ctrl + D or W



## cin表达式的值

* cin >> m >> n ··· 在成功读入所有变量时为true，否则为false



## 处理无结束标记的OJ题目输入

* 输入若干个(不知道多少个)正整数，输出其中的最大值

  * Sample Input：
    * 2 3 4 5 6 787 54532 12
  * Sample
    * 54532

  ```c++
  #include <iostream>
  using namespace std;
  
  int main(){
      int n, mx = 0;
      while(scanf("%d", &n) != EOF){
          //或 while(Scanf("%d", &n) == 1), while( cin >> n )
          if (n > mx)
              mx = n;
      }
      printf("%d", mx);
      return 0;
  }
  ```



# 4.3 用 freopen 重定向输入

* 调试程序时，每次运行程序都要输入测试数据，太麻烦
* 可以将测试数据存入文件，然后用 freopen将输入由键盘重定向为文件，则运行程序时不再需要输入数据了

```c++
#include <iostream>
using namespace std;

int main(){
    freopen("c:\\tmp\\test.txt", "r", stdin);
    //此后所有输入都来自文件 c:\tmp\text.txt
    int n, mx = 0;
    while( cin >> n) {
        if ( n > mx)
            mx = n;
    }
    printf("%d", mx);
    return 0;    
}
```

# 循环例题选讲



