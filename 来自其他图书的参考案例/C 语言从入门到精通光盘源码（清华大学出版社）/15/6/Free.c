#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* pInt;	/*整型指针*/
	pInt=(int*)malloc(sizeof(pInt));	/*分配空间整型空间*/
	*pInt=100;					/*赋值*/
	printf("%d\n",*pInt);		/*将值进行输出*/
	free(pInt);					/*释放该内存空间*/
	printf("%d\n",*pInt);		/*将值进行输出*/
	return 0;
}