#include<stdio.h>
void main()
{
    int i=1000,j=0;                                /*���������ʾ����*/
    
     for(;i<2000;i++)
     { 
         if((i%4==0&&i%100!=0)||i%400==0)          /*������ж�����*/
          
         printf("%d\n",i);
         j++;
     }
          
}