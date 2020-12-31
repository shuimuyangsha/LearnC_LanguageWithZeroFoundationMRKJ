#include<stdio.h>                                   /*包含头文件*/
#include<string.h>                                  /*包含strcmp()函数头文件*/

int main()                                          /*主函数main*/
{
    char user[20]={"exit"};                         /*定义字符数组*/
	char ustr[20];                                  /*定义用户输入的字符数组*/
	while(strcmp(user,ustr)!=0)                     /*与user比较不相等*/
    { 								 
		  printf("请输入字符串:\n");                /*提示信息*/
	      gets(ustr);                               /*用户输入字符数组*/ 
          puts(ustr);                               /*显示用户输入的字符数组*/
    }	 
	return 0;										/*程序结束*/
}

