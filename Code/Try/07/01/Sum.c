#include<stdio.h>
int main()
{
    int num,num1=0;                                 /*�������*/
    scanf("%d",&num);                              /*��������*/
     while(num<100)
     {
         num++;
         num1=num1+num;                             /*ʵ�����*/
      }
      printf("%d\n",num1);
     
      return 0;
}