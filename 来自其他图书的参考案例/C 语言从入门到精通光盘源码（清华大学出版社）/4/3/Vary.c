#include<stdio.h>

int main()
{
	char cChar;				/*�ַ��ͱ���*/
	short int iShort;		/*�����ͱ���*/
	int iInt;				/*���ͱ���*/
	float fFloat=70000;		/*�����ȸ�����*/

	cChar=(char)fFloat;		/*ǿ��ת����ֵ*/
	iShort=(short)fFloat;
	iInt=(int)fFloat;
			
	printf("the char is: %c\n",cChar);	/*����ַ�����ֵ*/
	printf("the long is: %ld\n",iShort);	/*��������ͱ���ֵ*/
	printf("the int is: %d\n",iInt);		/*������ͱ���ֵ*/
	printf("the float is: %f\n",fFloat);	/*��������ȸ����ͱ���ֵ*/

	return 0;		/*�������*/
}