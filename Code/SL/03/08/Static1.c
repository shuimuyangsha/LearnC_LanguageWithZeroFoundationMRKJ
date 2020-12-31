#include <stdio.h>                  /*包含头文件*/
 void park()                        /*定义停车函数*/
 {
	static int count = 30;          /*定义整形变量*/
	count = count - 1;              /*车位数减一*/
	printf("the remaining number of parking spaces:%d\n",count);/*提示停车位剩余情况*/
}

void main()             /*主函数main*/
{
     park();            /*进入第一辆车*/
     park();            /*进入第二辆车*/
     park();            /*进入第三辆车*/
     park();            /*进入第四辆车*/
}