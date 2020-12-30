#include<stdio.h>
#define MIX(a,b) ((a)*(b)+(b))						/*宏定义求两个数的混合运算*/
main()
{
	int x=5,y=9;
	printf("x,y:\n");
	printf("%d,%d\n",x,y);
	printf("the min number is:%d\n",MIX(x,y)); 				/*宏定义调用*/
}
