#include<stdio.h>
int main()
{
     									/*定义无符号变量*/
    int a=0xEFCA,result;
    result = a|0;										/*计算或运算的结果*/
    printf("a|0=%X\n", result);
    return 0;
}
