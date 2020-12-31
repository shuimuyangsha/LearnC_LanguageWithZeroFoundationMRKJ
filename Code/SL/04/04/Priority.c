#include<stdio.h>

int main()
{
	int iNumber1,iNumber2,iNumber3,iResult=0;/*声明整型变量*/
	iNumber1=5;		/*为变量赋值*/
	iNumber2=6;		
	iNumber3=9;

	iResult=iNumber1+iNumber2-iNumber3;/*加法，减法表达式*/
	printf("the result is : %d\n",iResult);/*显示结果*/

	iResult=iNumber1+iNumber2*iNumber3;/*加法，乘法表达式*/
	printf("the result is : %d\n",iResult);/*显示结果*/

	iResult=(iNumber1+iNumber2)*iNumber3;/*括号，加法，乘法表达式*/
	printf("the result is : %d\n",iResult);/*显示结果*/

	return 0;
}