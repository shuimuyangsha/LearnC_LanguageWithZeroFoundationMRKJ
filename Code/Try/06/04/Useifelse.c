#include<stdio.h>
int main()
{
    int year,sal=5000,bon=300 ;                             /*定义变量表示年数和基本工资和全勤奖*/
    scanf("%d",&year);                                      /*输入年数*/
    if(year>5)                                              /*判断输入年数*/
         printf("您的工资为：%d\n",sal+bon+2*bon);
    else 
         printf("您的工资为：%d\n",sal+bon);
    return 0;
}