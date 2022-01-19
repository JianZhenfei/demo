#include <stdio.h>
#include <string.h>
//结构体
//char int double。。。
//针对复杂对象
//创建类型

// . 结构体变量.成员
// -> 结构体指针->成员
struct Book
{
  char name[20];//是一个数组
  short price;//是一个变量
};//不可缺少，结束标志

int main()
{
  struct Book b1 = {"C程序设计语言", 650};
  struct Book* pb = &b1;
  //利用pb打印出书名和价格
  /*printf("书名:%s\n", b1.name);
  printf("价格:%d\n", b1.price);*/
  printf("%s\n", pb->name);
  printf("%d\n", pb->price);
  /*printf("书名:%s\n", b1.name);
  printf("价格:%d\n", b1.price);
  b1.price = 660;
  printf("修改后的价格:%d\n", b1.price);*/

  //数组变化需要拷贝
  strcpy(b1.name, "C++");
  printf("%s\n", pb->name);
}
