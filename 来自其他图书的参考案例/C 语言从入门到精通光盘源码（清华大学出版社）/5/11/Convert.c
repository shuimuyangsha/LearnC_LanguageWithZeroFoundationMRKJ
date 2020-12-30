#include<stdio.h>

int main()
{
	char cBig;		/*定义字符变量，表示大写字符*/
	char cSmall;	/*定义字符变量，表示小写字符*/	

	puts("Please enter capital character:");	/*输出提示信息*/
	cBig=getchar();		/*得到用户输入的大写字符*/
	puts("Minuscule character is:");	/*输出提示信息*/
	cSmall=cBig+32;		/*将大写字符转化成小写字符*/
	printf("%c\n",cSmall);	/*输出小写字符*/
	return 0;		/*程序结束*/
}
