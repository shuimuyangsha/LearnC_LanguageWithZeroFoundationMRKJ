#include<stdio.h>
#include<string.h>

int main()
{
    char str[]="Where there is a will, there is a way";
	char *string="��־���¾���";
	puts(str); 										 										 
	strcpy(str,string); 								/*����strcpy��������*/
	printf("����ɺ���Ϊ:%s\n",str);
	return 0;											/*�������*/
}

