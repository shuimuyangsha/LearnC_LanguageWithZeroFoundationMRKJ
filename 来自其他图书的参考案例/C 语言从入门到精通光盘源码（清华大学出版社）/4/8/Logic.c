#include<stdio.h>

int main()
{
	int iNumber1,iNumber2;	/*声明变量*/
	iNumber1=10;				/*为变量赋值*/
	iNumber2=0;

	printf("the 1 is Ture , 0 is False\n");/*显示提示信息*/
	printf("5< iNumber1&&iNumber2 is %d\n",5<iNumber1&&iNumber2);	/*显示逻辑与表达式的结果*/
	printf("5< iNumber1||iNumber2 is %d\n",5<iNumber1||iNumber2);	/*显示逻辑或表达式的结果*/
	iNumber2=!!iNumber1;	/*得到iNumber1的逻辑值*/
	printf("iNumber2 is %d\n",iNumber2);	/*输出逻辑值*/
	return 0;
}