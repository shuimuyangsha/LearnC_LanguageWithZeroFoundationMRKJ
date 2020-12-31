#include<stdio.h>

extern char* GetString(char* pString);			/*声明外部函数*/
extern void ShowString(char* pString);			/*声明外部函数*/

int main()
{
	char* pMyString;							/*定义字符串变量*/
	pMyString=GetString("我们必须在别人改变之前改变自己");				/*调用函数为字符串赋值*/
	ShowString(pMyString);						/*显示字符串*/

	return 0;
}

extern void ShowString(char* pString)
{
	printf("%s\n",pString);					/*显示字符串*/
}
extern char* GetString(char* pString)
{
	return pString;							/*返回字符*/
}