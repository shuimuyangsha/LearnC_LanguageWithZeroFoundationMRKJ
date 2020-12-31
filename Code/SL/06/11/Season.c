#include<stdio.h>
int main()
{
    int month;                          /*定义变量月份*/
    printf("please enter a month:\n");
    scanf("%d",&month);                 /*输入月份*/
       switch(month)                    /*根据月份分季节*/
       {
       /*多路开关模式*/
       case 3:
       case 4:    
       case 5:
           printf("%d is spring\n",month);/*3,4,5月是春季*/
           break;
        /*多路开关模式*/
       case 6:
       case 7:    
       case 8:
           printf("%d is summer\n",month);/*6,7,8月是夏季*/
           break;
       /*多路开关模式*/
       case 9:
       case 10:    
       case 11:
           printf("%d is autumn\n",month);/*9,10,11月是秋季*/
           break;
       /*多路开关模式*/
       case 12:
       case 1:    
       case 2:
           printf("%d is winter\n",month);/*12,1,2月是冬季*/
           break;
       default:
           printf("error!!!\n");        /*无此月份*/
       }
       return 0;                        /*程序结束*/
}