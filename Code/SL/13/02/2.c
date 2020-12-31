#include<stdio.h>           /*包含头文件*/
int main()                  /*主函数main*/
{
     									
    int a=0xEFCA,result;    /*定义变量*/
    result = a|a;		    /*计算或运算的结果*/
    printf("a|a=%X\n", result);/*输出结果*/
    return 0;                  /*程序结束*/
}
