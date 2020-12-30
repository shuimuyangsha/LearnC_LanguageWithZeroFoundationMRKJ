#include<stdio.h>
int main()
{
	int i=5,x1,x2,x3,x4; 								/*定义变量为基本整型，并为部分变量赋初值*/
	x1=i++;										/*先将i值赋给x1，然后加1*/
	x2=++i; 										/*将i值加1后的结果赋给x2*/
	x3=i--;										/*将i值赋给x3后i值减1*/
	x4=--i; 										/*将i值减1后的结果赋给x4*/
	printf("%d,%d,%d,%d",x1,x2,x3,x4); 					/*输出x1、x2、x3、x4*/
	return 0;
}
