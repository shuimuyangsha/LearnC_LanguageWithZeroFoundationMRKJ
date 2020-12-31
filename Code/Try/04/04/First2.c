#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5,num6,res;           /*声明整型变量*/
    num1=1;                                          /*为变量赋值*/
    num2=2;
    num3=3;
    num4=4;
    num5=5;
    num6=6;
    res=num1*num2+num3*num4+num5*num6;              /*加法、乘法表达式*/
    printf("res=%d\n",res);                         /*显示结果*/
    res=num1*(num2+(num3*(num4+(num5*num6))));       /*括号、加法、乘法表达式*/
    printf("res=%d\n",res);                         /*显示结果*/
    return 0;
}