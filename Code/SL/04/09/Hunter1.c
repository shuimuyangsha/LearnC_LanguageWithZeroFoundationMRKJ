#include<stdio.h>	                            /*包含头文件*/

int main()                                      /*主函数main*/
{
	int iValue;                                 /*定义变量iValue*/
	iValue=7;									/*为变量iValue赋值*/
	iValue+=iValue*=iValue/=iValue-5;           /*计算得到iValue变量值*/
	printf("the result is %d\n",iValue); 	    /*将计算结果输出*/
	return 0;                                   /*程序结束*/
}
