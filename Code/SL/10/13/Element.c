#include<stdio.h>/*包含头文件*/
int main()/*主函数main*/
{
	int i;/*定义循环控制变量*/
    char **p;/*定义指针变量*/
	char *element[]=
	{/*给指针数组中的元素赋初值*/
               "锂", 
               "铍", 
               "钠", 
               "镁", 
               "铝", 
               "钾", 
               "钙"
	};													
    for(i=0;i<7;i++)	/*输出指针数组中的各元素*/
 		{
 			p=element+i;    
 			printf("%s\n",*p);  				 
 		}
				
    return 0;
}

