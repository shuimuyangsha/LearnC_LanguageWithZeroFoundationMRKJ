#include <stdlib.h>
#include<stdio.h>

int main()
{
	int *pInt;		/*��������ָ��*/
	pInt=(int*)malloc(sizeof(int));	/*�����ڴ�*/

	*pInt=100;		/*ʹ�÷����ڴ�*/
	printf("the number is:%d\n",*pInt);	/*�����ʾ��ֵ*/
	free(pInt);		/*�ͷ��ڴ�*/
	return 0;		
}