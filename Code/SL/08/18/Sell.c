#include<stdio.h>                                       /*包含头文件*/
#include<string.h>                                      /*包含strcat()函数头文件*/
int main()                                              /*主函数main*/
{
	char str1[30]="sell sell sell",str2[30]=" apple";   /*定义字符数组并赋初值*/
	printf("输出前一句:\n");
	puts(str1);                                         /*输出语句*/									 
	printf("输出后一句:\n");
	puts(str2);                                         /*输出语句*/ 										 
	strcat(str1,str2); 									/*调用strcat函数进行字符串连接*/
	printf("整句为:\n");
	puts(str1); 										/*输出连接后的目的字符串*/
	return 0;											/*程序结束*/
}