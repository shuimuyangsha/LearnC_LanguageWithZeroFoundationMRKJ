#include<stdio.h>                                           /*����ͷ�ļ�*/
int main()                                                  /*������main*/
{
    int num;                                                /*�������,��ʾ�Ͳ�����*/
    puts("the number of meals:");                           /*��ʾ��Ϣ*/
    scanf("%d",&num);                                       /*��������*/
    if(num<=8)                                              /*�Ͳ�����С��8*/
    {
        printf("Arrange %d people dining table\n",num);     /*�����Ϣ�����Ų����Ͳ�*/ 
    }
    else                                                    /*�Ͳ��������ڵ���8*/
    {
         printf("Arrange luxurious private rooms\n");       /*���ź��������Ͳ�*/
    }
    return 0;                                               /*�������*/
}