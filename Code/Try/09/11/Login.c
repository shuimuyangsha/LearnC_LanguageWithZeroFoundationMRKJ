#include<stdio.h>

int Login(char* name,int code);			/*��������*/
void welcome(int num);
int main()
{
   int i;
   i=Login("����",123);
   printf("%d\n",i);
   welcome(i);			 
	return 0;					         /*�������*/
}
int Login(char* name,int code) 			/*���庯��*/
{
    int num;
    if(name=="����"&&code==123)
      return num=1;
    else
      return num=0;
}
void welcome(int num)
{
    if(num==1)
        printf("��¼�ɹ�\n");
    else
        printf("��¼ʧ��\n");
}