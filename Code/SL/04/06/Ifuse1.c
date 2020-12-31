#include <stdio.h>                              /*包含头文件*/
int main()                                      /*主函数main*/
{
    int iNumber;                                /*定义变量*/
    printf("please enter a number:\n");         /*提示信息*/
    scanf("%d",&iNumber);                       /*输入数字*/
    if(iNumber%2==0)                            /*使用关系表达式进行判断*/
        printf("%d is even number\n",iNumber);  /*显示结果*/
    if(iNumber%2!=0)                            /*使用关系表达式进行判断*/
        printf("%d is odd number\n",iNumber);   /*显示结果*/
    return 0;                                   /*程序结束*/
}