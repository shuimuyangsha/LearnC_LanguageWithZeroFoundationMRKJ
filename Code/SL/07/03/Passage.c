#include<stdio.h>
int main()
{
    int num=0;                                /*定义人数变量*/
    scanf("%d",&num);                         /*输入人数*/
     do                                       /*进入循环*/
     {
         num++;
         printf("还能承载 %d 人，\n",26-num);
                                     
      }while(num<=25);
         printf("座位已满，不能再承载了。\n");
      return 0;
}