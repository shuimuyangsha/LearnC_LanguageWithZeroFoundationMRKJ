#include <stdlib.h>
#include<stdio.h>

int main()
{
	int* pArray;		/*����ָ��*/
	int i;				/*ѭ�����Ʊ���*/
	pArray=(int*)calloc(3,sizeof(int));	/*�����ڴ�*/

	for(i=1;i<4;i++)	/*ʹ��ѭ����������и�ֵ*/
	{
		*pArray=10*i;	/*��ֵ*/
		printf("NO%d is: %d\n",i,*pArray);	/*��ʾ���*/
		pArray+=1;		/*�ƶ�ָ�뵽���鵽��һ��Ԫ��*/
	}
	return 0;
}