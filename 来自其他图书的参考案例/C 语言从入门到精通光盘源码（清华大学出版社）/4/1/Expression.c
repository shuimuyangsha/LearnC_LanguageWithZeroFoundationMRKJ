#include<stdio.h>

int main()
{
	int iNumber1,iNumber2,iNumber3;			/*声明变量*/
	iNumber1=3;								/*为变量赋值*/
	iNumber2=7;
			
	printf("the first number is :%d\n",iNumber1);/*显示变量值*/
	printf("the second number is :%d\n",iNumber2);

	iNumber3=iNumber1+10;					/*表达式中利用变量iNumber1加上一个常量*/
	printf("the first number add 10 is :%d\n",iNumber3);/*显示iNumber3的值*/
				
	iNumber3=iNumber2+10;					/*表达式中利用变量iNumber2加上一个常量*/
	printf("the second number add 10 is :%d\n",iNumber3);/*显示iNumber3的值*/

	iNumber3=iNumber1+iNumber2;				/*表达式中是两个变量进行计算*/
	printf("the result number of first add second is :%d\n",iNumber3);/*将计算结果输出*/

	return 0; /*程序结束*/
}