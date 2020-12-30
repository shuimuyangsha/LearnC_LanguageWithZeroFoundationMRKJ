#include<stdio.h>
#include<string.h>

int main()
{
	char str1[30],str2[30];
	printf("输入目的字符串:\n");
	gets(str1); 										/*输入目的字符*/
	printf("输入源字符串:\n");
	gets(str2); 										/*输入源字符串*/

	printf("输出目的字符串:\n");
	puts(str1); 										/*输出目的字符*/
	printf("输出源字符串:\n");
	puts(str2); 										/*输出源字符串*/
	strcat(str1,str2); 									/*调用strcat函数进行字符串连接*/
	printf("调用strcat函数进行字符串连接:\n");
	printf("字符串连接之后的目的字符串:\n");
	puts(str1); 										/*输出连接后的目的字符串*/

	return 0;											/*程序结束*/
}