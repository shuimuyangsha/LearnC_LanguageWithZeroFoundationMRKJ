#include <stdlib.h>
#include<stdio.h>

int main()
{
	int *pInt;		 
	pInt=(int*)malloc(sizeof(int));	 

	*pInt=5;		 
	printf("��Ӣ�����ˡ�ռ%dG�ռ�\n",*pInt);	 
	free(pInt);		 
	return 0;		
}