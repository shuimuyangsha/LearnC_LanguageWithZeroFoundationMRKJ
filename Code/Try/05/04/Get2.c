#include <stdio.h>
int main()
{
    char cString[20];
    puts("请输入账号：");
    
    gets(cString);
    puts("您输入的账号为：");
    puts(cString);
    puts("请输入密码： ");
    gets(cString);
    puts("您输入的密码为：");
    puts(cString);
    puts("请输入姓名： ");
    gets(cString);
    puts("您输入的姓名为：");
    puts(cString);
    puts("请输入身份证号： ");
    gets(cString);
    puts("您输入的身份证号为：");
    puts(cString);
    return 0;



}