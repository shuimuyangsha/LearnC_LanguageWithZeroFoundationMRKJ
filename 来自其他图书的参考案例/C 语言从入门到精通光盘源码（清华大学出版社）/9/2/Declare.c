#include<stdio.h>

void ShowNumber(int iNumber);		/*函数的声明*/

int main()
{
	int   iShowNumber;				/*定义整型变量*/
	printf("What Number do you wanna show?\n");	/*输出提示信息*/
	scanf("%d",&iShowNumber);		/*输入整数*/
	ShowNumber(iShowNumber);		/*调用函数*/
	return 0;						/*程序结束*/
}

/*函数的定义*/
void ShowNumber(int iNumber)		
{			
	printf("You wanna to show the Number is:%d\n",iNumber);/*输出整数*/
}