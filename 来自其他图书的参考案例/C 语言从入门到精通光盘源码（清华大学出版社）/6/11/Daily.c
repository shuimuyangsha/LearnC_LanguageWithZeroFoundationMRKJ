#include<stdio.h>

int main()
{
	int iDay=0;									/*���������ʾ���������*/

	printf("enter a day of week to get course:\n");		/*��ʾ��Ϣ*/
	scanf("%d",&iDay);							/*��������*/

	switch(iDay)
	{
	case 1:			/*iDay��ֵΪ1ʱ*/
		printf("Have a meeting in the company\n");
		break;
	case 6:			/*iDay��ֵΪ6ʱ*/
		printf("Go shopping with friends\n");
		break;
	case 7:			/*iDay��ֵΪ7ʱ*/
		printf("At home with families\n");
		break;
	default:		/*iDay��ֵΪ�������ʱ*/
		printf("Working with partner\n");
		break;
	}
	return 0;
}
