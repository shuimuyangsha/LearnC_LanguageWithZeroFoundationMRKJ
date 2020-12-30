#include<stdio.h>

int main()
{
	char cBig;		/*定义字符变量，表示大写字符*/
	char cSmall;	/*定义字符变量，表示小写字符*/	

	puts("Please enter capital character:");	/*输出提示信息*/
	cSmall=getchar();	
	puts("Minuscule character is:");	
	cBig=cSmall-32;		/*转化字符*/
	printf("%c,%d\n",cBig,cBig);	
	return 0;	
}