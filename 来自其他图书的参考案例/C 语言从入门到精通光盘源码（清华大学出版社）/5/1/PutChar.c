#include<stdio.h>

int main()
{
	char cChar1,cChar2,cChar3,cChar4;	/*声明变量*/
	cChar1='H';			/*为变量赋值*/
	cChar2='e';
	cChar3='l';
	cChar4='o';

	putchar(cChar1);	/*输出字符变量*/
	putchar(cChar2);
	putchar(cChar3);
	putchar(cChar3);
	putchar(cChar4);
	putchar('\n');		/*输出转义字符*/
	return 0;
}	