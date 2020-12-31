#include<stdio.h>

int main()
{
	int   iInt1=10;					/*定义整型变量*/
    int   iInt2=6;
	char  cChar='a';				/*ASCII码为97*/
	float fFloat1=1.5f;				/*定义单精度型变量整型变量*/
    float fFloat2=3.2f;

	double result=(iInt1+cChar)-fFloat1+fFloat2*iInt2 ;	/*得到相加的结果*/

	printf("%f\n",result);			/*显示变量值*/
	return 0;						/*程序结束*/
}