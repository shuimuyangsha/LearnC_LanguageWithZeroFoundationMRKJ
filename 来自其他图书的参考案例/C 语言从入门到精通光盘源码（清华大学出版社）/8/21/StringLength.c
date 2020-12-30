#include<stdio.h>
#include<string.h>

int main()
{
	char text[50],connect[50];
	int num;

	printf("输入一个字符串:\n");
	scanf("%s", &text); 								/*获取输入的字符串*/
	num = strlen(text); 								/*计算字符串长度*/
	printf("字符串的长度为:%d\n",num);					/*输出字符串长度*/
	printf("再输入一个字符串:\n");
	scanf("%s", &connect); 								/*获取输入的字符串*/
	num = strlen(connect);								/*计算字符串长度*/
	printf("字符串的长度为:%d\n",num);					/*输出字符串长度*/
	strcat(text,connect);								/*连接字符串*/
	printf("将两个字符串进行连接:%s\n",text);			/*输出连接后的字符串*/
	num = strlen(text);									/*计算连接后的字符串长度*/
	printf("连接后的字符串长度为:%d\n",num);			/*输出连接后的字符串*/

	return 0;												/*程序结束*/
}

