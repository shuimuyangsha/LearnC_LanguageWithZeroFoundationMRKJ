#include<stdio.h>

void ShowMember(int iMember);		/*声明函数*/

int main()
{
	int iCount[10];					/*定义一个整型的数组*/
	int i;							/*定义整型变量，用于循环*/

	for(i=0;i<10;i++)				/*进行赋值循环*/
	{
		iCount[i]=i;	
	}


	for(i=0;i<10;i++)				/*循环操作*/
	{
		ShowMember(iCount[i]);		/*执行输出函数操作*/
	}
	return 0;
}

void ShowMember(int iMember)		/*函数定义*/
{
	printf("Show the member is%d\n",iMember);		/*输出数据*/
}

