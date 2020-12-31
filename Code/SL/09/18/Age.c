#include<stdio.h>                           /*包含头文件*/
#include<math.h>
int main()                                  /*主函数main*/
{
	int iAbsoluteNumber;					/*定义整数*/
	int iNumber;							/*定义整数*/
    int differ,ab;                          /*定义变量*/
    printf("输入年龄：\n");
    scanf("%d,%d",&iAbsoluteNumber,&iNumber);/*输入2个年龄*/
   
    differ=iAbsoluteNumber-iNumber;	        /*相差的年龄*/			 
	ab=abs(differ);				            /*求相差的绝对值*/
	printf("两个人相差%d岁 \n",ab);         /*显示输出相差的年龄*/
	return 0;                               /*程序结束*/
}