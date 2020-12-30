#include <stdlib.h>
#include<stdio.h>

int main()
{
	int* iIntMalloc=(int*)malloc(sizeof(int));	/*分配空间*/
	*iIntMalloc=100;		/*使用该空间保存数据*/
	printf("%d\n",*iIntMalloc);	/*输出数据*/
	return 0;
}