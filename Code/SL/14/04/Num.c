#include "stdio.h"                          /*包含头文件*/
#define iInput 19054                        /*宏定义*/
int main()                                  /*主函数main*/
{	
     printf("当前是：%d\n", iInput);         /*显示结果*/
#if iInput>0                                /*判断条件*/
    
	if(iInput % 9527==0 && iInput %2 == 0)  /*判断被整除的数*/
      printf("能被9527整除的偶数\n");       /*输出信息*/
#else 
   #if iInput<0  
	    printf("当前为负数：%d\n", iInput); /*输出结果*/
  #else	
    printf("当前为：%d\n", iInput);         /*显示结果*/
#endif 
#endif 
  
	return 0;                               /*程序结束*/
}
