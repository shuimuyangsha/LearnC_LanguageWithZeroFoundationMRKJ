#include<stdio.h>

int main()
{
	char cBig;		/*�����ַ���������ʾ��д�ַ�*/
	char cSmall;	/*�����ַ���������ʾСд�ַ�*/	

	puts("Please enter capital character:");	/*�����ʾ��Ϣ*/
	cBig=getchar();		/*�õ��û�����Ĵ�д�ַ�*/
	puts("Minuscule character is:");	/*�����ʾ��Ϣ*/
	cSmall=cBig+32;		/*����д�ַ�ת����Сд�ַ�*/
	printf("%c\n",cSmall);	/*���Сд�ַ�*/
	return 0;		/*�������*/
}
