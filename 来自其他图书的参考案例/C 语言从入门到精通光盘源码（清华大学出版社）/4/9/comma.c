#include<stdio.h>

int main()
{
	int iValue1,iValue2,iValue3,iResult;	/*声明变量，使用逗号运算符*/
	/*为变量赋值*/
	iValue1=10;	
	iValue2=43;
	iValue3=26;
	iResult=0;

	iResult=iValue1++,--iValue2,iValue3+4;	/*计算逗号表达式*/
	printf("the result is :%d\n",iResult);/*将结果输出显示*/

	iResult=(iValue1++,--iValue2,iValue3+4);/*计算逗号表达式*/
	printf("the result is :%d\n",iResult);/*将结果输出显示*/
	return 0;		/*程序结束*/
}