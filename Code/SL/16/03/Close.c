#include <stdlib.h>
#include<stdio.h>

int main()
{
	int* iIntMalloc=(int*)malloc(sizeof(int));	 
	*iIntMalloc=10240;		 
	printf("�·���%d��\n",*iIntMalloc);	 
	return 0;
}