#include<stdio.h>

int main()
{
	char cChar1;		/*声明变量*/
	cChar1=getchar();	/*在输入设备得到字符*/
	putchar(cChar1);	/*输出字符*/
	putchar('\n');		/*输出转义字符换行*/
    getchar();			/*得到回车字符*/
	putchar(getchar());	/*得到输入字符，直接输出*/
	putchar('\n');		/*换行*/
	return 0;			/*程序结束*/
}