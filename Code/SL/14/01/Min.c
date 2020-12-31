#include<stdio.h>/*包含头文件*/
#define MIX(a,b)   (a<b?a:b)						/*宏定义求两个数的混合运算*/
int main()/*主函数main*/
{
	int x=15,y=9;/*定义变量*/
	printf("x,y为:\n");/*提示输出*/
	printf("%d,%d\n",x,y);/*显示输出*/
	printf("the min number is:%d\n",MIX(x,y)); 				/*宏定义调用*/
    return 0;/*程序结束*/
}
