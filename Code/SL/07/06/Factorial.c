#include<stdio.h>                                       /*包含头文件*/
int main()                                              /*主函数main*/
{
    int  n,i=1,result=1;                                /*定义变量*/
    printf("please enter a enter:\n");                  /*提示用户输入数据*/
    scanf("%d",&n);                                     /*输入数据*/
     for(;i<=n;i++)                                     /*省略表达式1*/
     { 
         result*=i;                                     /*计算阶乘*/                                 
     }
         printf("%d!=%d\n",n,result);                   /*输出结果*/
         
      return 0;                                         /*程序结束*/
}