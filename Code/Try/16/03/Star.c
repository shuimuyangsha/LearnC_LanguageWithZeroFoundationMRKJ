#include <stdlib.h>
#include<stdio.h>

int main()
{
    int* iIntMalloc;
    iIntMalloc=(int*)malloc(sizeof(int));	 
	*iIntMalloc=10000;		 
	printf("�ֳ���%d��\n",*iIntMalloc);	 
	return 0;
}