#include <stdio.h>                              /*����ͷ�ļ�*/
int main()                                      /*������main*/
{
    int iNumber;                                /*�������*/
    printf("please enter a number:\n");         /*��ʾ��Ϣ*/
    scanf("%d",&iNumber);                       /*��������*/
    if(iNumber%2==0)                            /*ʹ�ù�ϵ���ʽ�����ж�*/
        printf("%d is even number\n",iNumber);  /*��ʾ���*/
    if(iNumber%2!=0)                            /*ʹ�ù�ϵ���ʽ�����ж�*/
        printf("%d is odd number\n",iNumber);   /*��ʾ���*/
    return 0;                                   /*�������*/
}