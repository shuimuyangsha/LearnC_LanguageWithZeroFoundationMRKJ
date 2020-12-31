#include<stdio.h>
void main()
{
    int i=1000,j=0;                                /*定义变量表示年数*/
    
     for(;i<2000;i++)
     { 
         if((i%4==0&&i%100!=0)||i%400==0)          /*闰年的判断条件*/
          
         printf("%d\n",i);
         j++;
     }
          
}