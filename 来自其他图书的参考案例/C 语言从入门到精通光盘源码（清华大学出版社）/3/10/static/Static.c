#include<stdio.h>

void AddOne()
{
	static int iInt=1;				/*定义整型变量*/
	iInt=iInt+1;					/*变量加1*/
	printf("%d\n",iInt);			/*显示结果*/
}
int main()
{
	printf("第一次调用：");			/*显示结果*/
	AddOne();				/*调用Show函数*/
	printf("第二次调用：");			/*显示结果*/
	AddOne();				/*调用Show函数*/
	return 0;			/*程序结束*/
}