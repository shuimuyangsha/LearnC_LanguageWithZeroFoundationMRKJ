#include<stdio.h>
#define NUM 50
main()
{
	int i=0;
#if NUM>50
	i++;
#else
#if NUM<50
	i--;
#else
	i=i+50;
#endif
#endif
	printf("i is:%d\n",i);
}
