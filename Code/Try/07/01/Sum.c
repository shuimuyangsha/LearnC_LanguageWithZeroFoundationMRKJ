#include<stdio.h>
int main()
{
    int num,num1=0;                                 /*定义变量*/
    scanf("%d",&num);                              /*输入数据*/
     while(num<100)
     {
         num++;
         num1=num1+num;                             /*实现求和*/
      }
      printf("%d\n",num1);
     
      return 0;
}