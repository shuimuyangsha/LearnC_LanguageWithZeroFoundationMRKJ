#include<stdio.h>

int main()
{
	int iNumber;		/*定义变量*/

	printf("Enter a number\n");		/*显示提示信息*/
	scanf("%d",&iNumber);			/*输入数字*/

	if(iNumber)			/*判断变量的值*/
	{	
		/*判断为真，执行输出*/
		printf("the value is true and the number is: %d\n",iNumber);
	}
	else/*判断为假时执行输出*/
	{
		printf("the value is flase and the number is: %d\n",iNumber);
	}
	return 0;
}