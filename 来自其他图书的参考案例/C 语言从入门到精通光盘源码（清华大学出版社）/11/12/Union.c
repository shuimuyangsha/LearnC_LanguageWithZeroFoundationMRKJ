#include<stdio.h>

union DataUnion			/*��������������*/
{
	int iInt;			/*��Ա����*/
	char cChar;			
};

int main()
{
	union DataUnion Union;		/*���干�������*/
	Union.iInt=97;				/*Ϊ����������г�Ա��ֵ*/
	printf("iInt: %d\n",Union.iInt);		/*�����Ա��������*/
	printf("cChar: %c\n",Union.cChar);
	Union.cChar='A';			/*�ı��Ա������*/
	printf("iInt: %d\n",Union.iInt);		/*�����Ա��������*/
	printf("cChar: %c\n",Union.cChar);
	return 0;
}