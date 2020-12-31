#include<stdio.h>

int main()
{
	int iNumber1=3;		/*定义变量，赋值为3*/
	int iNumber2=3;

	int iResultPreA,iResultLastA;	/*声明变量，得到自加运算的结果*/
	int iResultPreD,iResultLastD;	/*声明变量，得到自减运算的结果*/

	iResultPreA=++iNumber1;			/*前缀自加运算*/
	iResultLastA=iNumber2++;		/*后缀自加运算*/

	printf("The Addself ...\n");
	printf("the iNumber1 is :%d\n",iNumber1);	/*显示自加运算后自身的数值*/
	printf("the iResultPreA is :%d\n",iResultPreA);	/*得到自加表达式中的结果*/
	printf("the iNumber2 is :%d\n",iNumber2);	/*显示自己运算后自身的数值*/
	printf("the iResultLastA is :%d\n",iResultLastA);	/*得到自加表达式中的结果*/

	iNumber1=3;		        /*恢复变量的值为3*/
	iNumber2=3;

	iResultPreD=--iNumber1;	/*前缀自减运算*/
	iResultLastD=iNumber2--;	/*后缀自减运算*/

	printf("The Deleteself ...\n");
	printf("the iNumber1 is :%d\n",iNumber1);	/*显示自减运算后自身的数值*/
	printf("the iResultPreD is :%d\n",iResultPreD);	/*得到自减表达式中的结果*/
	printf("the iNumber2 is :%d\n",iNumber2);	/*显示自减运算后自身的数值*/
	printf("the iResultLastD is :%d\n",iResultLastD);/*得到自减表达式中的结果*/

	return 0;	/*程序结束*/
}