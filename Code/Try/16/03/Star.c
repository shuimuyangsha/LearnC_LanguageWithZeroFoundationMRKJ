#include <stdlib.h>
#include<stdio.h>

int main()
{
    int* iIntMalloc;
    iIntMalloc=(int*)malloc(sizeof(int));	 
	*iIntMalloc=10000;		 
	printf("现场有%d人\n",*iIntMalloc);	 
	return 0;
}