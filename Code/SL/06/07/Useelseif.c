#include<stdio.h>                                           /*����ͷ�ļ�*/
int main()                                                  /*������main*/
{
    int num;                                                /*�������*/
    printf("please enter a num:");                          /*��ʾ�û���������*/
    scanf("%d",&num);                                       /*��������*/
    if(num==1)                                              /*�ж��������ֵ���1*/
    {
        printf("its main view is a triangle\n");            /*��ʾ����ͼ��������*/ 
    }
    else if(num==2)                                         /*�������ֵ���2*/ 
    {
        printf("the top view of cone is circular\n");       /*��ʾ����ͼ��Բ��*/
    }
    else if(num==3)                                         /*�������ֵ���3*/
    {
        printf("left view of the cone is a triangle\n");    /*��ʾ����ͼ��������*/
    }
      return 0;                                             /*�������*/
}