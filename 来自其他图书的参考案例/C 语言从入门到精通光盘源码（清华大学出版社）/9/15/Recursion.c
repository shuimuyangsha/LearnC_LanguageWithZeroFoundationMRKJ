#include<stdio.h>

void DisplayNames(char** cNameArray);	/*声明函数*/

char* cNames[]=		/*定义字符串数组*/
{
	"Aaron",		/*为字符串进行赋值*/
	"Jim",
	"Charles",
	"Sam",
	"Ken",
	"end"			/*设定结束标志*/
};

int main()
{
	DisplayNames(cNames);		/*调用递归函数*/
	return 0;
}

void DisplayNames(char** cNameArray)
{
	if(*cNameArray=="end")	/*判断结束标志*/
	{
		return ;			/*函数结束返回*/
	}
	else
	{
		DisplayNames(cNameArray+1);		/*调用递归函数*/
		printf("%s\n",*cNameArray);		/*输出字符串*/
	}
}