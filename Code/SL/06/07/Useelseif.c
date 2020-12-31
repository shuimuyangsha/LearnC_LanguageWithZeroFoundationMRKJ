#include<stdio.h>                                           /*包含头文件*/
int main()                                                  /*主函数main*/
{
    int num;                                                /*定义变量*/
    printf("please enter a num:");                          /*提示用户输入数字*/
    scanf("%d",&num);                                       /*输入数字*/
    if(num==1)                                              /*判断输入数字等于1*/
    {
        printf("its main view is a triangle\n");            /*提示主视图是三角形*/ 
    }
    else if(num==2)                                         /*输入数字等于2*/ 
    {
        printf("the top view of cone is circular\n");       /*提示俯视图是圆形*/
    }
    else if(num==3)                                         /*输入数字等于3*/
    {
        printf("left view of the cone is a triangle\n");    /*提示左视图是三角形*/
    }
      return 0;                                             /*程序结束*/
}