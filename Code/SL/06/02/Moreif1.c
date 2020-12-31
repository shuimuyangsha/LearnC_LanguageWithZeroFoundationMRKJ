#include<stdio.h>                               /*包含头文件*/
int main()                                      /*主函数main*/
{
    int score;                                  /*定义变量*/
    puts("please your score");                  /*提示信息*/
    scanf("%d",&score);                         /*输入考试成绩*/
    if (score>=60)                              /*判断成绩大于等于60*/
    {
        printf("your grade is %d\n",score);     /*显示成绩*/
        printf("Pass the exam\n");              /*显示通过考试*/
    }
    if(score<60)                                /*判断成绩小于60*/
    {
        printf("your grade is %d\n",score);     /*显示成绩*/
        printf("Don't pass the exam\n");        /*显示没有通过考试*/ 
    }
    return 0;                                   /*程序结束*/
}