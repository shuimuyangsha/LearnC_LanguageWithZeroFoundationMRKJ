#include<stdio.h>

int main()
{
	long iLong=100000;/*定义长整型变量，为其赋值*/
	printf("the Long is %ld\n",iLong);/*输出长整型变量*/

	printf("the string is: %s\n","LOVE");	/*输出字符串*/
	printf("the string is: %10s\n","LOVE");	/*使用m控制输出列*/
	printf("the string is: %-10s\n","LOVE");	/*使用-表示向左靠拢*/
	printf("the string is: %10.3s\n","LOVE");	/*使用n表示取字符数*/
	printf("the string is: %-10.3s\n","LOVE");	
	return 0;
}