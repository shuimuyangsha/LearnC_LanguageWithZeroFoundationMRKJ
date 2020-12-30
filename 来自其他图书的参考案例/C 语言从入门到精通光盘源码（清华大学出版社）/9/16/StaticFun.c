#include<stdio.h>

static char* GetString(char* pString)			/*定义赋值函数*/
{
	return pString;								/*返回字符*/
}

static void ShowString(char* pString)			/*定义输出函数*/
{
	printf("%s\n",pString);						/*显示字符串*/
}

int main()
{
	char* pMyString;							/*定义字符串变量*/

	pMyString=GetString("Hello!");				/*调用函数为字符串赋值*/
	ShowString(pMyString);						/*显示字符串*/

	return 0;
}

