#include<stdio.h>                                           /*����ͷ�ļ�*/
int main()                                                  /*������main*/
{
    int year;                                               /*���������ʾ��*/
    printf("please enter a year\n");                        /*��ʾ��Ϣ*/
    scanf("%d",&year );                                     /*��������*/
    if((year%4==0)&&(year%100!=0)||(year%400==0))           /*�ж�������Ϊ����*/
    {
        printf("%d is a leap year\n",year);                 /*���������������*/
    }
    else                                                    /*�ж������겻������*/
    {
        printf("%d isn't a leap year\n",year);              /*�����������������*/
    }
    return 0;                                               /*�������*/
}