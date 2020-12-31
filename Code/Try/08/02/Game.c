#include<stdio.h>
 void main()
{
    							 
    int grade[10]={12,5,21,15,32,10,25,14,30,20};/*输入学生成绩*/
    int total=0;                                  /*定义变量用来计算总成绩*/
    int i;
    float avg;                                     /*定义变量用来计算平均成绩*/
    for(i=0;i<10;i++)
    {
        total+=grade[i];                            /*计算总成绩*/
    }
    avg=((float)total/10);                          /*计算平均成绩*/
    printf("篮球比赛的平均成绩是：%f\n",avg);
    
}
