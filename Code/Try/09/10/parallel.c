#include<stdio.h>

/*声明函数，函数进行计算*/
void AddTwoNum(int iNum1, int iNum2,int iNum3, int iNum4);

int main()
{
	AddTwoNum(5,10,2,4);
	return 0;				                                /*程序结束*/
}

void AddTwoNum(int iNum1, int iNum2,int iNum3, int iNum4)	/*定义函数*/
{
	int iTempResult;		/*定义整型变量*/
	iTempResult=iNum1*iNum4-iNum2*iNum3;/*进行计算，并将结果赋值给iTempResult*/
    if(0==iTempResult)
        printf("2个向量(%d,%d) (%d,%d)坐标是平行的\n",iNum1,iNum2,iNum3,iNum4);
    else
        printf("2个向量(%d,%d) (%d,%d)坐标不是平行的\n",iNum1,iNum2,iNum3,iNum4);
	
}