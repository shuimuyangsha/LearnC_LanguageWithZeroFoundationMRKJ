#include<stdio.h>

int main()
{
	int iSelection;	/*定义变量，表示菜单的选项*/

	printf("---Menu---\n");/*输出屏幕的菜单*/
	printf("1 = Load\n");
	printf("2 = Save\n");
	printf("3 = Open\n");
	printf("other = Quit\n");

	printf("enter selection\n");	/*提示信息*/
	scanf("%d",&iSelection);		/*用户输入选项*/

	if(iSelection==1)			/*选项为1*/
	{
		printf("Processing Load\n");
	}
	else if(iSelection==2)		/*选项为2*/
	{
		printf("Processing Save\n");
	}
	else if(iSelection==3)		/*选项为3*/
	{
		printf("Processing Open\n");
	}
	else						/*选项为其他数值时*/
	{
		printf("Processing Quit\n");
	}
	return 0;
}