#include<stdio.h>

int main()
{
	char cBig;		/*�����ַ���������ʾ��д�ַ�*/
	char cSmall;	/*�����ַ���������ʾСд�ַ�*/	

	puts("Please enter capital character:");	/*�����ʾ��Ϣ*/
	cSmall=getchar();	
	puts("Minuscule character is:");	
	cBig=cSmall-32;		/*ת���ַ�*/
	printf("%c,%d\n",cBig,cBig);	
	return 0;	
}