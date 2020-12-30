#include<stdio.h>

int main()
{
	int iTotal,iValue,iDetail;/*声明变量*/
	iTotal=100; /*为变量赋值*/
	iValue=50;	
	iDetail=5;

	iValue*=iDetail;	/*计算得到iValue变量值*/
	iTotal+=iValue;		/*计算得到iTotal变量值*/
	printf("Value is: %d\n",iValue);	/*显示计算结果*/
	printf("Total is: %d\n",iTotal);
	return 0;
}