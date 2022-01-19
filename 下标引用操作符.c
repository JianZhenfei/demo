#include <stdio.h>

int Add(int x, int y)
{
    int z = 0;
    z = x + y;
    return z;
}
int main()
{
    int arr[10] = { 0 };
    int a = 10;
    int b = 20;
    int sum = Add(a, b);//()括号就是函数调用操作符
    printf("sum = %d\n",sum);

    return 0;
}