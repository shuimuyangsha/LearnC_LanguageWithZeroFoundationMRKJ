#include<stdio.h>
void main(int argc,char *argv[])								/*main函数为带参函数*/
{
	printf("the list of parameter:\n");
	printf("命令名：\n");
        printf("%s\n",*argv);
	printf("参数个数：\n");
	printf("%d\n",argc);
	
}
