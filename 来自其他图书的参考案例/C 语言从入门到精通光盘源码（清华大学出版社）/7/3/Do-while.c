#include<stdio.h>

int main()
{
	int iNumber=1;	/*�����������ʾ����*/
	int iSum=0;		/*��ʾ������ܺ�*/

	do
	{
		iSum=iSum+iNumber;	/*�����ۼӵ��ܺ�*/
		iNumber++;			/*���������1*/
	}
	while(iNumber<=100);	/*��������*/

	printf("the result is: %d\n",iSum);		/*���������*/
	return 0;
}