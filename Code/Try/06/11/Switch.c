#include<stdio.h>
int main()
{
    int num;                          /*定义变量为开关编号*/
    scanf("%d",&num);                 /*输入开关编号*/
       switch(num)                    /*根据开关编号亮灯*/
       {
       case 1:
       case 2:    
       case 3:
           printf("灯泡亮\n");
           break;
       case 4:
           printf("彩灯亮\n");
           break;
       case 5:    
       case 6:
           printf("白炽灯和节能灯亮\n");
           break;
       default:
           printf("所有灯都不亮\n");
       }
       return 0;
}