#include <stdio.h>
#define HOUR 365*24                         //定义符号常量
void main()
{
    int h,result;                        //定义变量
    printf("请输入小时：");                 //提示
    scanf("%d",&h);                      //输入数据
    result=h/(HOUR);                       //进行计算
    printf("一共有%d年\n",result);        //显示结果
}