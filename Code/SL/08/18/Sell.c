#include<stdio.h>                                       /*����ͷ�ļ�*/
#include<string.h>                                      /*����strcat()����ͷ�ļ�*/
int main()                                              /*������main*/
{
	char str1[30]="sell sell sell",str2[30]=" apple";   /*�����ַ����鲢����ֵ*/
	printf("���ǰһ��:\n");
	puts(str1);                                         /*������*/									 
	printf("�����һ��:\n");
	puts(str2);                                         /*������*/ 										 
	strcat(str1,str2); 									/*����strcat���������ַ�������*/
	printf("����Ϊ:\n");
	puts(str1); 										/*������Ӻ��Ŀ���ַ���*/
	return 0;											/*�������*/
}