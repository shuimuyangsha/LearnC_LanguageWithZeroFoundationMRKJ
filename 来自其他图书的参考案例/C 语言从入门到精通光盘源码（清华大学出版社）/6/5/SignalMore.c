#include<stdio.h>

int main()
{
	int iSignal;									/*���������ʾ�źŵƵ�״̬*/
	printf("the Red Light is 0,\nthe Green Light is 1,\nthe Yellow Light is other number\n");	/*�����ʾ��Ϣ*/
	scanf("%d",&iSignal);							/*����iSignal����*/

	if(iSignal==1)		/*���źŵ�Ϊ��ɫʱ*/
	{
		printf("the Light is green,cars can run\n");		/*�жϽ��Ϊ��ʱ���*/
	}
	if(iSignal==0)		/*���źŵ�Ϊ���ʱ*/
	{
		printf("the Light is red,cars can't run\n");		/*�жϽ��Ϊ��ʱ���*/
	}
	else				/*���źŵ�Ϊ�Ƶ�ʱ*/
	{
		printf("the Light is yellow,cars are ready\n");
	}
	return 0;
}
