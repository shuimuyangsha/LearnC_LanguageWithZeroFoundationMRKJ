#include<stdio.h>
#include<string.h>

int main()
{
	char str1[30],str2[30];
	printf("����Ŀ���ַ���:\n");
	gets(str1); 										/*����Ŀ���ַ�*/
	printf("����Դ�ַ���:\n");
	gets(str2); 										/*����Դ�ַ���*/

	printf("���Ŀ���ַ���:\n");
	puts(str1); 										/*���Ŀ���ַ�*/
	printf("���Դ�ַ���:\n");
	puts(str2); 										/*���Դ�ַ���*/
	strcpy(str1,str2); 									/*����strcpy����ʵ���ַ�������*/
	printf("����strcpy���������ַ�������:\n");
	printf("�����ַ���֮���Ŀ���ַ���:\n");
	puts(str1); 										/*����������Ŀ���ַ���*/

	return 0;											/*�������*/
}

