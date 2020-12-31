#include<stdio.h>                                           /*包含头文件*/
int main()                                                  /*主函数main*/
{
    int num;                                                /*定义变量,表示就餐人数*/
    puts("the number of meals:");                           /*提示信息*/
    scanf("%d",&num);                                       /*输入人数*/
    if(num<=8)                                              /*就餐人数小于8*/
    {
        printf("Arrange %d people dining table\n",num);     /*输出信息，安排餐桌就餐*/ 
    }
    else                                                    /*就餐人数大于等于8*/
    {
         printf("Arrange luxurious private rooms\n");       /*安排豪华包房就餐*/
    }
    return 0;                                               /*程序结束*/
}