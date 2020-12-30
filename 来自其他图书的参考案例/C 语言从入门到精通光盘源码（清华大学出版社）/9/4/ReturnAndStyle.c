#include<stdio.h>

char ShowChar();					/*函数的声明*/

int main()
{
	char cResult;
	cResult=ShowChar();				/*进行9-4的减法计算，并将结果赋值给变量iResult*/
	printf("%c\n",cResult);
	return 0;						/*程序结束*/
}

char ShowChar()
{
	int iNumber;						/*定义整型变量*/
	printf("please input a number:\n");	/*输出提示信息*/
	scanf("%d",&iNumber);				/*输入一个整型变量*/
	return iNumber;						/*返回的是整型*/
}