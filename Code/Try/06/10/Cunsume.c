#include<stdio.h>
int main()
{
    float money=1026,m;                          /*定义变量money是所花的金额 m是打折之后所花费用*/
    float rebate=0.0f;                         /*定义折扣变量*/
       int grade=(int)money/500;               /*计算等级*/
       switch(grade)                           /*根据等级计算折扣*/
       {
       case 0:
           rebate=0.0f;
           m=money;
           break;
       case 1:
           rebate=0.9f;
           m=money*rebate;
           break;
       case 2:
           rebate=0.8f;
           m=money*rebate;
           break;
       case 4:
           rebate=0.7f;
           m=money*rebate;
           break;
       case 6:
           rebate=0.6f;
           m=money*rebate;
           break;
       case 10:
           rebate=0.5f;
           m=money*rebate;
           break;
       }
       printf("顾客将享受的折扣:%f\n",rebate); 
       printf("打扣后需支付的金额:%f\n",m);
       return 0;
}