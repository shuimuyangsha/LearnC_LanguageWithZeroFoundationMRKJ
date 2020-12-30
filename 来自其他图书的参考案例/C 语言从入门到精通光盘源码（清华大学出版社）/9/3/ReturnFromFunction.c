#include<stdio.h>

int Function();			/*声明函数*/

int main()
{
	printf("this step is before the Function\n");	/*输出提示信息*/
	Function();		/*调用函数*/
	printf("this step is end of the Function\n");	/*输出提示信息*/
	return 0;
}

int Function()		/*定义函数*/
{
	printf("this step is in the function\n");		/*输出提示信息*/
	/*函数结束*/
}