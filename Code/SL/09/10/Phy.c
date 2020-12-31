#include<stdio.h>                           /*包含头文件*/

/*声明函数，函数进行计算*/
void TwoNum(float iNum1, float iNum2);

int main()
{
	TwoNum(5,10);/*调用函数*/
	return 0;				                /*程序结束*/
}

void TwoNum(float iNum1, float iNum2)	/*定义函数*/
{
	float iTempResult;		                /*定义整型变量*/
	iTempResult=iNum1/iNum2;                /*进行计算，并将结果赋值给iTempResult*/
    printf("电阻值是%f\n",iTempResult);     /*显示输出电阻值*/	
}