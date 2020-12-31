#include <stdio.h>                              /*包含头文件*/
int main()                                      /*主函数main*/
{
    int a=10,b=20,c=30,x;                       /*定义变量并赋初值*/
    x=a = b+c,b*a,c-b;                          /*计算逗号表达式*/
    printf("x=%d,a=%d, b=%d, c=%d\n",x,a,b,c);  /*将结果输出显示*/
    return 0;                                   /*程序结束*/
}