#include<stdio.h>                                           /*包含头文件*/
int main()                                                  /*主函数main*/
{
    int year;                                               /*定义变量表示年*/
    printf("please enter a year\n");                        /*提示信息*/
    scanf("%d",&year );                                     /*输入年数*/
    if((year%4==0)&&(year%100!=0)||(year%400==0))           /*判断输入年为闰年*/
    {
        printf("%d is a leap year\n",year);                 /*输入的年数是闰年*/
    }
    else                                                    /*判断输入年不是闰年*/
    {
        printf("%d isn't a leap year\n",year);              /*输入的年数不是闰年*/
    }
    return 0;                                               /*程序结束*/
}