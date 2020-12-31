#include<stdio.h>
#include<string.h>

int main()
{
	char text[20]="ZhangSan@MRSOFT.COM",change[20];
	 printf("原字符串为:%s\n",text);	 				/*输入要转换的字符串*/
	strcpy(change,text);								/*拷贝要转换的字符串*/
	strlwr(change);								        /*字符串转换小写*/
	printf("转换成小写字母的字符串为:%s\n",change);		/*输出转换后的字符串*/
	return 0;											/*程序结束*/
}

