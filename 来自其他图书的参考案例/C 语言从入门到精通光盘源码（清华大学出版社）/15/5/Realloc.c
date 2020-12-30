#include<stdio.h>
#include <stdlib.h>

int main()
{

	double *fDouble;		/*定义实型指针*/
	int* iInt;				/*定义整型指针*/
	fDouble=(double*)malloc(sizeof(double));/*使用malloc为分配实型空间*/
	printf("%d\n",sizeof(*fDouble));	/*输出空间的大小*/
	iInt=realloc(fDouble,sizeof(int));	/*使用realloc改变分配空间大小*/
	printf("%d\n",sizeof(*iInt));	
	return 0;
}