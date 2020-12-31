#include<stdio.h>
int main()
{
	char cChar1;						    /*字符型变量cChar1*/
	char cChar2;					    	/*字符型变量cChar2*/
	int	 iInt1;					        	/*整型变量iInt1*/
	int 	 iInt2;						    /*整型变量iInt1*/

	cChar1='a';						        /*为变量赋值*/
	cChar2=97;						
	iInt1='a';
	iInt2=97;

	printf("%c\n",cChar1);				    /*显示结果为a*/
	printf("%d\n",cChar2);				    /*显示结果为97*/
	printf("%c\n",iInt1);					/*显示结果为a*/
	printf("%d\n",iInt2);					/*显示结果为97*/
	return 0;							    /*程序结束*/
}
