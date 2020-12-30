#include<stdio.h>

enum Color{Red=1,Blue,Green} color;/*定义枚举变量，并初始化*/
int main()
{
	int icolor;			/*定义整型变量*/
	scanf("%d",&icolor);	/*输入数据*/
	switch(icolor)		/*判断icolor值*/
	{
	case Red:		/*枚举常量，Red表示1*/
		printf("the choice is Red\n");
		break;
	case Blue:		/*枚举常量，Blue表示2*/
		printf("the choice is Blue\n");
		break;
	case Green:		/*枚举常量，Green表示3*/
		printf("the choice is Green\n");
		break;
	default:
		printf("???\n");
		break;
	}
	return 0;
}