#include <stdio.h>
int main()
{
    //真 - 非0
    //假 - 0
    //&& - 逻辑与
    //|| - 逻辑或
    int a = 3;
    int b = 5;
    int c = a && b;
    int d = a || b;
    printf("c = %d\nd = %d\n",c,d);

    return 0;
}
