#include<stdio.h>

int main()
{
	int index;					/*����ѭ�����Ʊ���*/
    int	iArray[6]={0,1,2,3,4,5};		/*�������е�Ԫ�ظ�ֵ*/

	for(index=0;index<6;index+=2)		/*��������е�Ԫ��*/
	{
		printf("%d\n",iArray[index]);
	}
	
	return 0;
}