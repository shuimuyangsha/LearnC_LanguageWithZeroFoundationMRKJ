#include <stdio.h>              /*包含头文件*/
int main()                      /*主函数main*/
{
    int x,y;                    /*定义变量*/
    printf("please enter two numbers:\n");   /*提示信息*/
    scanf("x=%d,y=%d",&x,&y);   /*输入x,y数据*/
    x=y-x;                      /*交换x,y的值*/
    y=y-x;
    x=y+x;   
    printf("x=%d,y=%d\n",x,y);  /*输出交换后的数据*/
    return 0;                   /*程序结束*/
}