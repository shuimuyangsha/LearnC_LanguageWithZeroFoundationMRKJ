#include<stdio.h>

int main()
{
	int iNumber;		/*�������*/

	printf("Enter a number\n");		/*��ʾ��ʾ��Ϣ*/
	scanf("%d",&iNumber);			/*��������*/

	if(iNumber)			/*�жϱ�����ֵ*/
	{	
		/*�ж�Ϊ�棬ִ�����*/
		printf("the value is true and the number is: %d\n",iNumber);
	}
	else/*�ж�Ϊ��ʱִ�����*/
	{
		printf("the value is flase and the number is: %d\n",iNumber);
	}
	return 0;
}