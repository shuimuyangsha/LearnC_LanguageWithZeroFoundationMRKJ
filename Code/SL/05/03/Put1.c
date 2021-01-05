#include<stdio.h>               /*包含头文件*/

int main()                      /*主函数main*/
{
	char *cChar1="长春";		/*声明变量，并且赋初值*/
    char *cChar2="晴";
	puts(cChar1);	            /*puts函数第一种形式输出字符*/
	puts(cChar2);
    puts("气温0-7摄氏度");      /*puts函数第二种形式输出字符*/
	return 0;		        	/*程序结束*/
}