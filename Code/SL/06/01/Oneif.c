#include<stdio.h>                            /*����ͷ�ļ�*/
int main()                                   /*������main*/
{
    int code;                                /*�����������ʾ����*/
    puts("please enter code:");              /*��ʾ��Ϣ*/
    scanf("%d",&code);                       /*��������*/
    if(code==404328)                         /*�ж����������Ƿ����趨������ͬ*/
        printf("enter the password correctly,can take money\n");/*�����Ϣ����ʾ����ȡǮ��*/         
    return 0;                               /*�������*/
}