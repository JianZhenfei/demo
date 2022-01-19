#include <stdio.h>

int main()
{
    //extern - 声明外部符号
    extern int g_val;
    printf("g_val = %d\n",g_val);
    return 0;
}