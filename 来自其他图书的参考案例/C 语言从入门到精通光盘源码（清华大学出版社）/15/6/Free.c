#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* pInt;	/*����ָ��*/
	pInt=(int*)malloc(sizeof(pInt));	/*����ռ����Ϳռ�*/
	*pInt=100;					/*��ֵ*/
	printf("%d\n",*pInt);		/*��ֵ�������*/
	free(pInt);					/*�ͷŸ��ڴ�ռ�*/
	printf("%d\n",*pInt);		/*��ֵ�������*/
	return 0;
}