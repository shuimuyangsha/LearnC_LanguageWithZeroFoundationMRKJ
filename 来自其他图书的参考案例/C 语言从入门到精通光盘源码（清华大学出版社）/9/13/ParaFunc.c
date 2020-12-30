#include<stdio.h>

/*声明函数，函数进行加法计算*/
int AddTwoNum(int iNum1, int iNum2);

int main()
{
	int iResult;							/*定义变量用来存储计算结果*/
	
	iResult=AddTwoNum(10,AddTwoNum(3,5));			/*在参数中中调用函数AddTwoNum*/
	printf("The result is : %d\n",iResult);			/*将计算结果进行输出*/
	return 0;								/*程序结束*/
}

int AddTwoNum(int iNum1, int iNum2)			/*定义函数*/
{
	int iTempResult;						/*定义整型变量*/
	iTempResult=iNum1+iNum2;				/*进行加法计算，并将结果赋值给iTempResult*/
	return iTempResult;						/*返回计算结果*/
}
