#include <stdio.h>                          /*包含头文件*/
int main()                                  /*主函数main*/
{  
    char cString[2];                        /*定义一个字符数组变量*/
    puts("请问一下哪一个不是开发语言：");   /*puts函数输出题目信息*/
    puts("A.C   B.C++   C.C#   D.CF");
    gets(cString);                          /*获取字符串，选择答案*/
    puts("你输入的答案是：");               /*puts函数输出提示信息*/
    puts(cString);                          /*输出所选答案*/
    return 0;                               /*程序结束*/

}