#include<stdio.h>

int main()
{
	int iInt1,iInt2;	/*定义两个整型变量*/
	puts("Please enter two numbers:");	/*通过puts函数输出提示信息的字符窜*/
	scanf("%d%d",&iInt1,&iInt2);	/*通过scanf得到输入的数据*/
	printf("The first is : %d\n",iInt1);	/*显示第一个输入的数据*/
	printf("The second is : %d\n",iInt2);	/*显示第二个输入的数据*/
	return 0;
}