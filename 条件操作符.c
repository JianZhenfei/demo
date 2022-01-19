#include <stdio.h>
 int main()
 {
     int a = 10;
     int b = 20;
     int max = 0;
     //条件操作符
     max = (a > b ? a : b);//三目操作符,满足目1，执行目2，不满足则执行目3
     printf("%d\n",max);

     return 0;
 }