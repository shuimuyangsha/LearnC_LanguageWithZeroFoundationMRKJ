#include<stdio.h>                                   /*����ͷ�ļ�*/
#include<string.h>                                  /*����strcpy()����ͷ�ļ�*/

int main()                                          /*������main*/
{
	char str1[30],str2[30];                         /*�����ַ�����*/
	printf("ԭ������:\n");
	gets(str1);                                     /*����ԭ������*/									 
	printf("������������:\n");
	gets(str2);                                     /*����������*/										 

	printf("ԭ������:\n");
	puts(str1);                                     /*���ԭ������*/										 
	printf("������������:\n");
	puts(str2);                                     /*���������*/									 
	strcpy(str1,str2); 								/*����strcpy����ʵ���ַ�������*/
	printf("������������ɹ����µ���������:\n");
	puts(str1); 									/*����������Ŀ���ַ���*/

	return 0;										/*�������*/
}

