#include<stdio.h>                          /*包含头文件*/
void main()                                /*主函数main*/
{
    int grade[7]={300,500,464,578,532};   /*输入一周计步数量*/
    int total=0;                            /*定义变量用来计算总步数*/
    int i;  
    float avg;                              /*定义变量用来计算平均步数*/
    for(i=0;i<7;i++)                       /*循环数组的元素*/
    {
        total+=grade[i];                   /*计算总步数*/
    }
    avg=((float)total/7);                 /*计算平均步数*/
    printf("这一周计步的平均值是:%f\n",avg);/*显示输出这一周计步的平均值*/
}
