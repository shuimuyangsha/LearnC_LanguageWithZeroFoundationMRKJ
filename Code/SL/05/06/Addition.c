#include<stdio.h>

int main()
{
	long iLong=100000;/*���峤���ͱ�����Ϊ�丳ֵ*/
	printf("the Long is %ld\n",iLong);/*��������ͱ���*/

	printf("the string is: %sKeJi\n","MingRi");	/*����ַ���*/
	printf("the string is: %10sKeJi\n","MingRi");	/*ʹ��m���������*/
	printf("the string is: %-10sKeJi\n","MingRi");	/*ʹ��-��ʾ����£*/
	printf("the string is: %10.3sKeJi\n","MingRi");	/*ʹ��n��ʾȡ�ַ���*/
	printf("the string is: %-10.3sKeJi\n","MingRi");	
	return 0;
}