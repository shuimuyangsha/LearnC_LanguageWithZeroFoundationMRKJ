#include<stdio.h>
#include <stdlib.h>

int main()
{

	double *fDouble;		/*����ʵ��ָ��*/
	int* iInt;				/*��������ָ��*/
	fDouble=(double*)malloc(sizeof(double));/*ʹ��mallocΪ����ʵ�Ϳռ�*/
	printf("%d\n",sizeof(*fDouble));	/*����ռ�Ĵ�С*/
	iInt=realloc(fDouble,sizeof(int));	/*ʹ��realloc�ı����ռ��С*/
	printf("%d\n",sizeof(*iInt));	
	return 0;
}