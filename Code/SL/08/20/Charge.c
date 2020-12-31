#include<stdio.h>                                       /*包含头文件*/
#include<string.h>

int main()                                              /*主函数main*/
{
	char text[20],change[20];                           /*定义字符数组*/
	printf("输入一个字符串:\n");                        /*显示输出*/
	scanf("%s", &text); 								/*输入要转换的字符串*/
	strcpy(change,text);								/*拷贝要转换的字符串*/
	strupr(change);								        /*字符串转换大写*/
	printf("转换成大写字母的字符串为:%s\n",change);		/*输出转换后的字符串*/
	return 0;											/*程序结束*/
}

