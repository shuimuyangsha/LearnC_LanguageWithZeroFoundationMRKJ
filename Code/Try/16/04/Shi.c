#include <stdlib.h>
#include<stdio.h>
int main()
{
	int* pArray;	 
	int i;			 
	pArray=(int*)calloc(10,sizeof(int)); 

	for(i=0;i<10;i++)
	printf("%3d\n",*pArray);
    *pArray+=1;
	printf("\n");
    
	free(pArray);
	return 0;
}
/*���ۣ�calloc������ռ��Ԫ�س�ʼ��*/