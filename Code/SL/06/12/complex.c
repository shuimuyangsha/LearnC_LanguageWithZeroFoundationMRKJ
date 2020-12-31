#include<stdio.h>

int main() 
{
	int iMonth=0,iDay=0;		/*定义变量*/
	printf("enter the month you want to know the days\n");/*提示信息*/
	scanf("%d",&iMonth);		/*输入数据*/
	switch(iMonth)				/*检验变量*/
	{
		/*多路开关模式switch语句进行检验*/
	case 1:			/*1表示一月份*/
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:					
	case 12:
		iDay=31;	/*为iDay赋值为31*/
		break;		/*跳出switch结构*/
	case 4:
	case 6:
	case 9:
	case 11:
		iDay=30;	/*为iDay赋值为30*/
		break;		/*跳出switch结构*/
	case 2:
		iDay=28;	/*为iDay赋值为28*/
		break;		/*跳出switch结构*/
	default:		/*默认情况*/
		iDay=-1;	/*赋值为-1*/
		break;		/*跳出switch结构*/
	}

	if(iDay==-1)	/*使用if语句判断iDay的值*/
	{
		printf("there is a error with you enter\n");
	}
	else		/*默认的情况*/
	{
		printf("2017.%d has %d days\n",iMonth,iDay);
	}
	return  0;
}