#include<stdio.h>                                       /*包含头文件*/
int main()                                              /*主函数main*/
{
    int num;                                            /*定义变量*/
    printf("请输入一个数字:\n");						/*提示用户输入数字*/                         
     while(num!=147)                                    /*循环条件*/
     {
         scanf("%d",&num);                              /*输入数据*/
          if(num<147)                                   /*输入数据小于147*/
          {
             printf("你猜小了\n");						/*输出你猜小了*/
          }
         else if(num>147)                               /*输入数据大于147*/
         {
           printf("你猜大了\n");						/*输出你猜大了*/
         }
          
         else if(num==147)                              /*输入数据等于147*/
         {
           printf("你猜对了！！\n");					/*输出你猜对了*/
         }
      }
      return 0;                                         /*程序结束*/
}