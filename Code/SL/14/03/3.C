#include<stdio.h>
#define NUM 50
void main()
{
	int i=0;
#if NUM>50										/*�ж�NUM�Ƿ����50*/
	i++;
#endif
#if NUM==50
	i=i+50;
#endif
#if NUM<50
	i--;
#endif
	printf("Now i is:%d\n",i);
}
