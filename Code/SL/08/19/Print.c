#include<stdio.h>                                   /*����ͷ�ļ�*/
#include<string.h>                                  /*����strcmp()����ͷ�ļ�*/

int main()                                          /*������main*/
{
    char user[20]={"exit"};                         /*�����ַ�����*/
	char ustr[20];                                  /*�����û�������ַ�����*/
	while(strcmp(user,ustr)!=0)                     /*��user�Ƚϲ����*/
    { 								 
		  printf("�������ַ���:\n");                /*��ʾ��Ϣ*/
	      gets(ustr);                               /*�û������ַ�����*/ 
          puts(ustr);                               /*��ʾ�û�������ַ�����*/
    }	 
	return 0;										/*�������*/
}

