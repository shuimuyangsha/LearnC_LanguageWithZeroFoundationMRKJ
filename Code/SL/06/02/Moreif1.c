#include<stdio.h>                               /*����ͷ�ļ�*/
int main()                                      /*������main*/
{
    int score;                                  /*�������*/
    puts("please your score");                  /*��ʾ��Ϣ*/
    scanf("%d",&score);                         /*���뿼�Գɼ�*/
    if (score>=60)                              /*�жϳɼ����ڵ���60*/
    {
        printf("your grade is %d\n",score);     /*��ʾ�ɼ�*/
        printf("Pass the exam\n");              /*��ʾͨ������*/
    }
    if(score<60)                                /*�жϳɼ�С��60*/
    {
        printf("your grade is %d\n",score);     /*��ʾ�ɼ�*/
        printf("Don't pass the exam\n");        /*��ʾû��ͨ������*/ 
    }
    return 0;                                   /*�������*/
}