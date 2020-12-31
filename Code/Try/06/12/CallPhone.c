#include<stdio.h>
int main()
{
    int telephone=10086,num;                 /*定义电话用户*/
     if(telephone==10086)                   /*判断是否为移动用户*/
     {
         printf("你好，欢迎致电中国移动,客服为您提供以下服务:查询话费请拨1、人工服务请拨0:\n");
         scanf("%d",&num);
       switch(num)                          /*根据输入的数字分选择业务*/
       {
       case 1:
          printf("您的话费余额为9.89元\n");
           break;
       case 0:
           printf("您好，欢迎使用移动客服业务，为了保证通话质量，您的通话将会被录音，谢谢合作。\n");
           break;
       default:
           printf("对不起，系统没有此业务。\n");
       }
     }
     else
     {
        printf("暂时无法提供服务");
     }
       return 0;
}