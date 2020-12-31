#include<stdio.h>                                       /*包含头文件*/
#include<string.h>

int main()                                              /*主函数main*/
{
	char text[50];                                      /*定义字符数组*/
	printf("输入一个密码:\n");
	scanf("%s", &text); 								/*获取输入的字符串*/
  							
	 if(strlen(text)==6)	                            /*计算字符串长度并比较是否等于6*/
         printf("输入密码是6位\n");
     else
         printf("输入密码不是6位\n");

	return 0;											/*程序结束*/
}

