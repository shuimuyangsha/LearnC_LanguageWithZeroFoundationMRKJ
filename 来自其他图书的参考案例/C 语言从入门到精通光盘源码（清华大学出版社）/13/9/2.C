#include<stdio.h>
#define MIN(a,b,c) ((a)>(b)?((b)>(c)?(c):(b)):((a)>(c)?(c):(a)))						/*宏定义找两个数中较小数*/
main()
{
	int x,y,z;
	printf("please input x、y、z:\n");
	scanf("%d,%d,%d",&x,&y,&z);
	printf("the min number is:%d\n",MIN(x,y,z)); 				/*宏定义调用*/
}
