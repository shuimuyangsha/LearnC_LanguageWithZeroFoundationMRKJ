#include<stdio.h>

int main()
{
	int   iInt=1;				    	/*定义整型变量*/
	char  cChar='A';				    /*ASCII码为65*/
	float fFloat=2.2f;				    /*定义单精度型变量整型变量*/

	double result=iInt+cChar+fFloat;	/*得到相加的结果*/

	printf("%f\n",result);		    	/*显示变量值*/
	return 0;					    	/*程序结束*/
}