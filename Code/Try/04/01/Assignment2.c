#include<stdio.h>
int main()
{
    
    int price=3,journey1=10,journey2=3,money;   /*定义变量，为其赋初值*/
    money=journey1*price+journey2*price;        /*将表达式的结果赋值给变量*/
    printf("总共花了%d元\n",money);             /*显示结果*/
    return 0;                                   /*程序结束*/
}