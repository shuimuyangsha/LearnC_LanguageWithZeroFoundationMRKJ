#include <stdlib.h>
#include<stdio.h>

int main()
{
	int *pInt;		 
	pInt=(int*)malloc(sizeof(int));	 

	*pInt=5;		 
	printf("¡¶Ó¢ÐÛÁªÃË¡·Õ¼%dG¿Õ¼ä\n",*pInt);	 
	free(pInt);		 
	return 0;		
}