#include<stdio.h>
#define MUL(a,b) ((a)*(b))						/*宏定义求两个数的混合运算*/
main()
{
	int x,y;
	printf("please input x and y:\n");
	scanf("%d%d",&x,&y);
	printf("the result is:%d\n",MUL(x,y)); 				/*宏定义调用*/
}
