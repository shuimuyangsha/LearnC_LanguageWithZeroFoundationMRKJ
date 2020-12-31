#include<stdio.h>                                           /*包含头文件*/
int main()                                                  /*主函数main*/
{
    int price=97,gue;                                       /*定义变量，price是正确的数，gue为猜的数*/
    printf("please enter a number:\n");
    scanf("%d",&gue);                                       /*输入猜的数*/
    if(gue<price)                                           /*判断输入猜的数小于正确的数比较*/
    {
        printf("You guess the number is small\n");          /*输出您猜小了*/
    }
    if(gue>price)                                           /*判断输入猜的数大于正确的数比较*/  
    {
        printf("You guess the number is big\n");                   /*您猜的数大了*/
    }
    else                             
    {
        printf("You have guessed it\n");                    /*显示您猜对了*/
    }
      return 0;                                             /*程序结束*/
}