#include<stdio.h>

int main()
{
	long iLong;		/*长整型变量*/
	short iShort;	/*短整型变量*/
	int iNumber1=1;	/*整型变量，为其赋值为1*/
	int iNumber2=2;	/*整型变量，为其赋值为2*/
	char cChar[10];	/*定义字符数组变量*/

	printf("Enter the long integer\n");	/*输出信息提示*/
	scanf("%ld",&iLong);				/*输入长整型数据*/
	
	printf("Enter the short integer\n");/*输出信息提示*/	
	scanf("%hd",&iShort);				/*输入短整型数据*/
	
	printf("Enter the number:\n");		/*输出信息提示*/
	scanf("%d*%d",&iNumber1,&iNumber2);	/*输入整型数据*/

	printf("Enter the string but only show three character\n");/*输出信息提示*/
	scanf("%3s",cChar);					/*输入字符串*/

	printf("the long interger is: %ld\n",iLong);  /*显示长整型值*/
	printf("the short interger is: %hd\n",iShort);	/*显示短整型值*/
	printf("the Number1 is: %d\n",iNumber1);		/*显示整型iNumber1的值*/
	printf("the Number2 is: %d\n",iNumber2);		/*显示整型iNumber2的值*/
	printf("the three character are: %s\n",cChar);	/*显示字符串*/
	
	return 0;
}