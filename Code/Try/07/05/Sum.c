#include<stdio.h>
int main()
{
     int a=-1,i=1;                      /*�������*/
     long c=0;                         /*�������,�������*/
     while(i<=101)                     /*����ѭ��*/
     {
        a=0-a;
        c=c+i*a;
        i+=2;                          /*ÿ�β���2*/
                                  
     } 
     printf("sum=%d\n",c);    
      return 0;
}