#include<stdio.h>                           /*包含头文件*/
int main()                                  /*主函数main*/
{
    int a=6/(3-1)+1;                        /*计算几次能度过*/
    int *p;                                 /*定义指针变量*/
	p=&a;                                   /*将地址赋给指针变量*/
	printf("至少%d次能全部渡过河\n",*&a);   /*输出次数*/
    return 0;                               /*程序结束*/
}
	 
