#include<stdio.h>
#include<string.h>

int main()
{
	char str1[30],str2[30];
	printf("����Ŀ¼:\n");
	gets(str1); 									 
	printf("�����ļ���:\n");
	gets(str2); 										 

	printf("���Ŀ¼:\n");
	puts(str1); 										 
	printf("����ļ���:\n");
	puts(str2); 										 
	strcat(str1,str2); 									/*����strcat���������ַ�������*/
	printf("�ļ�ȫ·��:\n");
	puts(str1); 										/*������Ӻ��Ŀ���ַ���*/

	return 0;											/*�������*/
}