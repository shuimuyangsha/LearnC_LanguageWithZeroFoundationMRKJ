#include<stdio.h>         /*包含头文件*/

int main()               /*主函数main*/
{
	char cChar1,cChar2;	/*声明变量*/
	cChar1='@';			/*为变量赋值*/
	cChar2='_';
	  
	putchar(cChar1);	/*输出字符变量*/
	putchar(cChar2);
	putchar(cChar1);
	putchar('\n');		/*输出转义字符*/
	return 0;           /*程序结束*/
}	