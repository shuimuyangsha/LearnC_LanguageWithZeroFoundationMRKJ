#include<stdio.h>
#include<string.h>

int main()
{
	char text[50],connect[50];
	int num;

	printf("����һ���ַ���:\n");
	scanf("%s", &text); 								/*��ȡ������ַ���*/
	num = strlen(text); 								/*�����ַ�������*/
	printf("�ַ����ĳ���Ϊ:%d\n",num);					/*����ַ�������*/
	printf("������һ���ַ���:\n");
	scanf("%s", &connect); 								/*��ȡ������ַ���*/
	num = strlen(connect);								/*�����ַ�������*/
	printf("�ַ����ĳ���Ϊ:%d\n",num);					/*����ַ�������*/
	strcat(text,connect);								/*�����ַ���*/
	printf("�������ַ�����������:%s\n",text);			/*������Ӻ���ַ���*/
	num = strlen(text);									/*�������Ӻ���ַ�������*/
	printf("���Ӻ���ַ�������Ϊ:%d\n",num);			/*������Ӻ���ַ���*/

	return 0;												/*�������*/
}

