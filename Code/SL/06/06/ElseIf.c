#include<stdio.h>                               /*包含头文件*/
int main()                                      /*主函数main*/
{
    int num;                                    /*定义变量*/
    printf("please enter censorship:");         /*提示用户输入关卡*/
    scanf("%d",&num);                           /*输入的数*/
    if(num==1)                                  /*判断输入的数等于*/
    {
        printf("the current into first level\n");/*进入第一关*/ 
    }
    else if(num==2)                               /*输入的关卡数等于2*/
    {
        printf("the current into second level\n");/*进入第二关*/
    }
    else if(num==3)                               /*输入的关卡数等于3*/ 
    {
        printf("the current into third level\n"); /*进入第三关*/
    }
    else
    {
        printf("the current into %d level\n",num);/*进入其他关*/
    }
      return 0;                                   /*程序结束*/
}