#include<stdio.h>
#include<string.h>

int main()
{
	char text[50];
	 

	printf("����how���:\n");
	scanf("%s", &text); 								/*��ȡ������ַ���*/
 						
     if(strlen(text)>=3&&strlen(text)<30)	            /*�����ַ�������*/
        printf("д��ɹ�\n");
    else
        printf("д����ʧ��\n");
 
	return 0;											/*�������*/
}

