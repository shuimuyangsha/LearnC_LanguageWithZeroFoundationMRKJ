#include<stdio.h>

int main()
{
	long iLong=100000;/*���峤���ͱ�����Ϊ�丳ֵ*/
	printf("the Long is %ld\n",iLong);/*��������ͱ���*/

	printf("the string is: %s\n","LOVE");	/*����ַ���*/
	printf("the string is: %10s\n","LOVE");	/*ʹ��m���������*/
	printf("the string is: %-10s\n","LOVE");	/*ʹ��-��ʾ����£*/
	printf("the string is: %10.3s\n","LOVE");	/*ʹ��n��ʾȡ�ַ���*/
	printf("the string is: %-10.3s\n","LOVE");	
	return 0;
}