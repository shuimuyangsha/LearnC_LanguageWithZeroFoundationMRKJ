#include<stdio.h>
int main()
{
    int V1=0/3600,V2=100000/3600;       /*速度km/h转化为m/s*/
	float  t=8.7f;                      /*所用时间*/
    double a;                           /*定义加速度*/
    a=(V2-V1)/t;                        /*加速度计算表达式*/
    printf("加速度a=%f\n",a);
    return 0;	                        /*程序结束*/
}