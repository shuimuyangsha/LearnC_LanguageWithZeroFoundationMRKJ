#include<stdio.h>
#include <stdlib.h>

int main()
{

	int *fDouble;/*��������ָ��*/	 
	char* iInt;	/*����ʵ��ָ��*/		 
	fDouble=(int*)malloc(sizeof(int)); /*ʹ��mallocΪ����ʵ�Ϳռ�*/
	printf("%d\n",sizeof(*fDouble));/*����ռ�Ĵ�С*/	 
	iInt=realloc(fDouble,sizeof(char));/*ʹ��realloc�ı����ռ��С*/	 
	printf("%d\n",sizeof(*iInt));/*����ռ�Ĵ�С*/	
	return 0;/*�������*/
}