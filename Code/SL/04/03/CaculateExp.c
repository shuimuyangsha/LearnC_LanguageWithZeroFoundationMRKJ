#include<stdio.h>
int main()
{
	int iCelsius,iFahrenheit;		        /*������������*/
	printf("Please enter temperature :\n"); /*��ʾ��ʾ��Ϣ*/
	scanf("%d",&iFahrenheit);		        /*�ڼ��������뻪���¶�*/
	iCelsius=5*(iFahrenheit-32)/9;	        /*ͨ���������ʽ���м��㣬���������ֵ*/

	printf("Temperature is :");	            /*��ʾ��ʾ��Ϣ*/
	printf("%d",iCelsius);		            /*��ʾ�����¶�*/
	printf(" degrees Celsius\n");       	/*��ʾ��ʾ��Ϣ*/
	return 0;	                            /*�������*/
}