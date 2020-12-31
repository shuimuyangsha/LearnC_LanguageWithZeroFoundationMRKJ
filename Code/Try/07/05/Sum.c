#include<stdio.h>
int main()
{
     int a=-1,i=1;                      /*定义变量*/
     long c=0;                         /*定义变量,存计算结果*/
     while(i<=101)                     /*进入循环*/
     {
        a=0-a;
        c=c+i*a;
        i+=2;                          /*每次步进2*/
                                  
     } 
     printf("sum=%d\n",c);    
      return 0;
}