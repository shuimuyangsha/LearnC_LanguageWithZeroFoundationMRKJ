#include<stdio.h>
int main()
{
    int num;                                             /*定义变量*/
    scanf("%d",&num);                                    /*输入考试成绩*/
    if (num==1)                                         /*判断输入的数字*/
        printf("奖品是42寸彩电\n");                          
    if (num==2)                                       
        printf("奖品是光波炉\n"); 
    if (num==3)                                         
        printf("奖品是加湿器\n");  
    if (num==4)                                          
        printf("奖品是16G-U盘\n");  
    return 0;
}