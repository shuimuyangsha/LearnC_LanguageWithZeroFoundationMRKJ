#include<stdio.h>                                       /*����ͷ�ļ�*/
#include<string.h>

int main()                                              /*������main*/
{
	char text[20],change[20];                           /*�����ַ�����*/
	printf("����һ���ַ���:\n");                        /*��ʾ���*/
	scanf("%s", &text); 								/*����Ҫת�����ַ���*/
	strcpy(change,text);								/*����Ҫת�����ַ���*/
	strupr(change);								        /*�ַ���ת����д*/
	printf("ת���ɴ�д��ĸ���ַ���Ϊ:%s\n",change);		/*���ת������ַ���*/
	return 0;											/*�������*/
}

