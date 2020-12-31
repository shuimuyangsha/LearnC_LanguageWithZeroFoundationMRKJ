#include<stdio.h>               /*包含头文件*/
#define TEM 37                  /*定义宏定义*/
int main()                      /*主函数main*/
{
	 
    #if TEM>37                  /*判断温度*/
         printf("高烧\n");      /*输出信息*/		
    #elif TEM<36                /*判断温度*/							
       printf("低烧\n");        /*输出信息*/	
    #else
         printf("正常体温\n");	/*输出信息*/		
    #endif
	printf("当前温度是:%d\n",TEM);/*输出当前温度*/
    return 0;                   /*程序结束*/
}
