#include<stdio.h>
#include<string.h>

int main()
{
	char str1[30],str2[30];
	printf("输入目录:\n");
	gets(str1); 									 
	printf("输入文件名:\n");
	gets(str2); 										 

	printf("输出目录:\n");
	puts(str1); 										 
	printf("输出文件名:\n");
	puts(str2); 										 
	strcat(str1,str2); 									/*调用strcat函数进行字符串连接*/
	printf("文件全路径:\n");
	puts(str1); 										/*输出连接后的目的字符串*/

	return 0;											/*程序结束*/
}