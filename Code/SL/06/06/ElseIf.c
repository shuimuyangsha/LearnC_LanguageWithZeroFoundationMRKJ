#include<stdio.h>                               /*����ͷ�ļ�*/
int main()                                      /*������main*/
{
    int num;                                    /*�������*/
    printf("please enter censorship:");         /*��ʾ�û�����ؿ�*/
    scanf("%d",&num);                           /*�������*/
    if(num==1)                                  /*�ж������������*/
    {
        printf("the current into first level\n");/*�����һ��*/ 
    }
    else if(num==2)                               /*����Ĺؿ�������2*/
    {
        printf("the current into second level\n");/*����ڶ���*/
    }
    else if(num==3)                               /*����Ĺؿ�������3*/ 
    {
        printf("the current into third level\n"); /*���������*/
    }
    else
    {
        printf("the current into %d level\n",num);/*����������*/
    }
      return 0;                                   /*�������*/
}