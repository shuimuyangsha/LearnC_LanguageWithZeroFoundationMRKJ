#include<stdio.h>

int main()
{
	int iHoursWorded=8;		/*���������Ϊ��������ֵ����ʾ����ʱ��*/
	int iHourlyRate;		/*������������ʾһ��Сʱ��нˮ*/
	int iGrossPay;			/*������������ʾ�õ��Ĺ���*/

	iHourlyRate=13;			/*Ϊ������ֵ*/
	iGrossPay=iHoursWorded*iHourlyRate;	/*�����ʽ�Ľ����ֵ������*/

	printf("The HoursWorded is: %d\n",iHoursWorded);	/*��ʾ����ʱ�����*/
	printf("The HourlyRate is: %d\n",iHourlyRate);		/*��ʾһ��Сʱ��нˮ*/
	printf("The GrossPay is: %d\n",iGrossPay);			/*��ʾ�������õĹ���*/

	return 0;	/*�������*/
}