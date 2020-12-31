#include<stdio.h>/*包含头文件*/
void swap(int *a,int *b)/*自定义交换函数*/
{
    int t=*a;/*实现两数交换*/
    *a=*b;
    *b=t;
}
int main()/*主函数main*/
{
    int x=1,y=9;/*定义变量并初始化*/
    swap(&x,&y);/*调用函数交换值*/
    printf("交换数据是：x=%d,y=%d\n",x,y);/*输出交换后的值*/
    return 0;/*程序结束*/

}