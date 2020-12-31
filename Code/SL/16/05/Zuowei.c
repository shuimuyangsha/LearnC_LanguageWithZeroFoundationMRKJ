#include<stdio.h>
#include <stdlib.h>

int main()
{

	int *fDouble;/*定义整型指针*/	 
	char* iInt;	/*定义实型指针*/		 
	fDouble=(int*)malloc(sizeof(int)); /*使用malloc为分配实型空间*/
	printf("%d\n",sizeof(*fDouble));/*输出空间的大小*/	 
	iInt=realloc(fDouble,sizeof(char));/*使用realloc改变分配空间大小*/	 
	printf("%d\n",sizeof(*iInt));/*输出空间的大小*/	
	return 0;/*程序结束*/
}