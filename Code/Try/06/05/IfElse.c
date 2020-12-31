#include<stdio.h>
int main()
{
    int time;                                       /*定义变量*/
    scanf("%d",&time);                              /*输入时间*/
    if(time<12)                                     /* 输入时间比较*/
        printf("Good day\n"); 
    if(time==12)                                        
        printf("Good Noon\n");
    else                                        
        printf("Good evening\n");
      return 0;
}