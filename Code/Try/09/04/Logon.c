#include<stdio.h>

void Logon(char* name,int code);			/*��������*/

int main()
{
    Logon("��",123);			 
	return 0;					            /*�������*/
}

 
void Logon(char* name,int code) 			/*��ʽ����*/
{
    if(name=="����"&&code==123)
      printf("��¼�ɹ�\n");
    else
      printf("��¼ʧ��\n");
         
     
       
}