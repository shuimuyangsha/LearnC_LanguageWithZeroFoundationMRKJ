#include <stdio.h>                                               /*包含头文件*/
int main()                                                       /*主函数main*/
{
    int num1=65,num2=66,num3=67,num4=68,num5=69,num6=70,num7=71;/*定义变量，为变量赋初值65-71*/
    char c1,c2,c3,c4,c5,c6,c7;                                  /*定义char型变量*/
    c1=(char)num1;                                              /*强制转换赋值*/
    c2=(char)num2;
    c3=(char)num3;
    c4=(char)num4;
    c5=(char)num5;
    c6=(char)num6;
    c7=(char)num7;
    printf("%c %c %c %c %c %c %c\n",c1,c2,c3,c4,c5,c6,c7);      /*输出字符变量值*/
    return 0;                                                   /*程序结束*/
}
