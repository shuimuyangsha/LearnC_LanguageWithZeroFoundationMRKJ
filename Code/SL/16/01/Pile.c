#include <stdlib.h>
#include<stdio.h>

int main()
{
	char *pInt;		/*����ָ��*/
	pInt=(char*)malloc(sizeof(char));	/*�����ڴ�*/

	*pInt=65;		/*ʹ�÷����ڴ�*/
	printf("the graph is:%c\n",*pInt);	/*�����ʾͼ��*/
	free(pInt);		/*�ͷ��ڴ�*/
	return 0;		
}