#include<stdio.h>

int main()
{
	int iDay=0;	/*定义变量表示输入的星期*/
	/*定义变量代表一周中的每一天*/
	int Monday=1,Tuesday=2,Wednesday=3,Thursday=4,
		Friday=5,Saturday=6,Sunday=7;

	printf("enter a day of week to get course:\n");/*提示信息*/
	scanf("%d",&iDay);		/*输入星期*/

	if(iDay>Friday)			/*休息日的情况*/
	{
		if(iDay==Saturday)	/*为周六时*/
		{
			printf("Go shopping with friends\n");
		}
		else				/*为周日时*/
		{
			printf("At home with families\n");
		}
	}
	else					/*工作日的情况*/
	{
		if(iDay=Monday)		/*为周一时*/
		{
			printf("Have a meeting in the company\n");
		}	
		else				/*为其他星期时*/		
		{
			printf("Working with partner\n");
		}
	}

	return 0;/*程序结束*/
}
