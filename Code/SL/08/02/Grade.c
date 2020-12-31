#include<stdio.h>                                           /*包含头文件*/
void main()                                                 /*主函数main*/
{
    int grade[10]={95,85,45,78,68,91,90,55,48,80};       /*输入学生成绩*/
    int total=0;                                            /*定义变量用来计算总成绩*/
    int i;
    float avg;                                              /*定义变量用来计算平均成绩*/
    for(i=0;i<10;i++)
    {
        total+=grade[i];                                    /*计算总成绩*/
    }
    avg=((float)total/10);                                 /*计算平均成绩*/
    printf("the student's averge score is %f\n",avg); /*显示输出平均成绩*/
 }
