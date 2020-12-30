#include<stdio.h>

int main()
{
	int iDay=0;									/*定义变量表示输入的星期*/

	printf("enter a day of week to get course:\n");		/*提示信息*/
	scanf("%d",&iDay);							/*输入星期*/

	switch(iDay)
	{
	case 1:										/*iDay的值为1时*/
		printf("Have a meeting in the company\n");
		break;
	/*多路开关模式*/
	case 2:		
	case 3:
	case 4:
	case 5:
		printf("Working with partner\n");
		break;
	case 6:										/*iDay的值为6时*/
		printf("Go shopping with friends\n");
		break;
	case 7:										/*iDay的值为7时*/
		printf("At home with families\n");
		break;
	default:									/*iDay的值错误时*/
		printf("error!!\n");
	}
	return 0;
}
