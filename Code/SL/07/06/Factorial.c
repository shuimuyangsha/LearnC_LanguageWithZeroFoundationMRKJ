#include<stdio.h>                                       /*����ͷ�ļ�*/
int main()                                              /*������main*/
{
    int  n,i=1,result=1;                                /*�������*/
    printf("please enter a enter:\n");                  /*��ʾ�û���������*/
    scanf("%d",&n);                                     /*��������*/
     for(;i<=n;i++)                                     /*ʡ�Ա��ʽ1*/
     { 
         result*=i;                                     /*����׳�*/                                 
     }
         printf("%d!=%d\n",n,result);                   /*������*/
         
      return 0;                                         /*�������*/
}