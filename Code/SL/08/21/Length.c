#include<stdio.h>                                       /*����ͷ�ļ�*/
#include<string.h>

int main()                                              /*������main*/
{
	char text[50];                                      /*�����ַ�����*/
	printf("����һ������:\n");
	scanf("%s", &text); 								/*��ȡ������ַ���*/
  							
	 if(strlen(text)==6)	                            /*�����ַ������Ȳ��Ƚ��Ƿ����6*/
         printf("����������6λ\n");
     else
         printf("�������벻��6λ\n");

	return 0;											/*�������*/
}

