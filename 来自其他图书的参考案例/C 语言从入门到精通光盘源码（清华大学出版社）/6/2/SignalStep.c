#include<stdio.h>


int main()
{
	int iSignal;									/*���������ʾ�źŵƵ�״̬*/
	printf("the Red Light is 0,the Green Light is 1\n");	/*�����ʾ��Ϣ*/
	scanf("%d",&iSignal);							/*����iSignal����*/

	if(iSignal==1)									/*ʹ��if�������ж�*/
	{
		printf("the Light is green,cars can run\n");		/*�жϽ��Ϊ��ʱ���*/
	}
	if(iSignal==0)									/*ʹ��if�������ж�*/
	{
		printf("the Light is red,cars can't run\n");		/*�жϽ��Ϊ��ʱ���*/
	}
	return 0;
}
