#include<stdio.h>
 void main()
{
    							 
    int grade[4]={67,80,74};              /*输入成绩*/
    int total=0;                          /*定义变量用来计算总成绩*/
    int i;
    float avg;                            /*定义变量用来计算平均成绩*/
    for(i=0;i<4;i++)
    {
        total+=grade[i];                  /*计算总成绩*/
    }
    avg=((float)total/4);               /*计算平均成绩*/
    printf("平均成绩是：%f\n",avg);
    
}
