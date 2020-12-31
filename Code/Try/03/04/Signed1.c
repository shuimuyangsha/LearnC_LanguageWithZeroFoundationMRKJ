#include <stdio.h>
void main()
{
    signed int i,j;           //定义有符号整型变量
    i=-2147483648;            //对变量赋值
    j=2147483647;
    printf("有符号整型变量最小值是%d\n",i);       //显示结果
    printf("有符号整型变量最大值是%d\n",j);
}