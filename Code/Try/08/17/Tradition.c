#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="Where there is a will, there is a way";
	char *string="有志者事竟成";
	puts(str); 										 										 
	strcpy(str,string); 								/*调用strcpy函数翻译*/
	printf("翻译成汉语为:%s\n",str);
	return 0;											/*程序结束*/
}

