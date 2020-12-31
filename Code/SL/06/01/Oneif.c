#include<stdio.h>                            /*包含头文件*/
int main()                                   /*主函数main*/
{
    int code;                                /*定义变量，表示密码*/
    puts("please enter code:");              /*提示信息*/
    scanf("%d",&code);                       /*输入密码*/
    if(code==404328)                         /*判断输入密码是否与设定密码相同*/
        printf("enter the password correctly,can take money\n");/*输出信息，表示可以取钱了*/         
    return 0;                               /*程序结束*/
}