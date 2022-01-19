#include <stdio.h>

#define MAX 10 //#define 定义标识符常量
#define MAX2(X, Y) (X>Y?X:Y)//#define 定义宏

int Max(int x, int y)
{
  if (x>y)
  return x;
  else
  return y;
}

int main()
{
  int min = 20;

  int max = MAX2(MAX, min);
  printf("max = %d\n", max);

  max = Max(MAX, min);
  printf("max = %d\n", max);

}
