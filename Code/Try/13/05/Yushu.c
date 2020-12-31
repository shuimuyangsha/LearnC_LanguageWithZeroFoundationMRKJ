#include "stdio.h"
int main()
{
  /*
    取模运算转化成位运算 (在不产生溢出的情况下)
    a % (2^n) 等价于 a & (2^n - 1)
  */
  int a = 1028;
  printf("%d\n",(a & (2^8 - 1)));
	return 0;
}

