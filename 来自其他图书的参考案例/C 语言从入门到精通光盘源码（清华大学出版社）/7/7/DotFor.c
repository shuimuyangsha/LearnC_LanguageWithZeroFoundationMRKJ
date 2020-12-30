#include<stdio.h>

int main()
{
	int iCount,iSum;	/*定义变量*/
	/*在for循环中，为变量赋值，对循环变量进行两次自增运算*/
	for(iSum=0,iCount=0;iCount<=100;iCount++,iCount++)
	{
		iSum=iSum+iCount;	/*进行累加计算*/
	}
	printf("the result is:%d\n",iSum);/*输出结果*/
	return 0;
}