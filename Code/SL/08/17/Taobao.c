#include<stdio.h>                                   /*包含头文件*/
#include<string.h>                                  /*包含strcpy()函数头文件*/

int main()                                          /*主函数main*/
{
	char str1[30],str2[30];                         /*定义字符数组*/
	printf("原来密码:\n");
	gets(str1);                                     /*输入原来密码*/									 
	printf("重新设置密码:\n");
	gets(str2);                                     /*输入新密码*/										 

	printf("原来密码:\n");
	puts(str1);                                     /*输出原来密码*/										 
	printf("重新设置密码:\n");
	puts(str2);                                     /*输出新密码*/									 
	strcpy(str1,str2); 								/*调用strcpy函数实现字符串拷贝*/
	printf("重新设置密码成功，新的密码如下:\n");
	puts(str1); 									/*输出拷贝后的目的字符串*/

	return 0;										/*程序结束*/
}

