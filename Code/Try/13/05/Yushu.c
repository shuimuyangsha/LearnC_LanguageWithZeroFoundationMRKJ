#include "stdio.h"
int main()
{
  /*
    ȡģ����ת����λ���� (�ڲ���������������)
    a % (2^n) �ȼ��� a & (2^n - 1)
  */
  int a = 1028;
  printf("%d\n",(a & (2^8 - 1)));
	return 0;
}

