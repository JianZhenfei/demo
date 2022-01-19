#include <stdio.h>
#include <string.h>

int main()
{
  int a = 10;//4个字节
  char ch = 'w';
  int* p = &a;
  char* pc = &ch;
  double d = 3.14;
  double* pd = &d;
//  printf("%c\n", pc);
  *pc = 'a';
  //printf("%p\n", &a);//打印地址
  printf("%p\n", p);
  *p = 20;//* -解引用操作符 相当于把20放到这个内存地址里
  printf("%d\n", a);
  printf("%p\n", pc);
  printf("%c\n", ch);
  printf("%d\n", sizeof(pc));//地址的长度只和集群的位数有关
  printf("%d\n", sizeof(pd));//同上
}
