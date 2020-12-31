#include<stdio.h>                               /*包含头文件*/
int main()                                      /*主函数main*/
{
    int high=80;                                /*定义变量高度*/ 
    int i;                                      /*定义变量*/
    
     for(i=0;i<6;i++)                           /*使用for语句循环*/
     { 
         high/=2;                               /*每次反弹高度*/
         printf("the height of the current is %d\n",high);/*当前高度*/
     }
        printf("the height of the sixth is %d\n",high);/*显示第六次反弹高度*/
         
      return 0;                                 /*程序结束*/
}