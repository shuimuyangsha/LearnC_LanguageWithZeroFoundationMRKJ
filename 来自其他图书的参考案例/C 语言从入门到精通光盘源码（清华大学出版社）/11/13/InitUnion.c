#include<stdio.h>

union DataUnion							/*��������������*/
{
	int iInt;								/*��Ա����*/
	char cChar;			
};

int main()
{
	union DataUnion Union={97};					/*���干��������������г�ʼ��*/
	printf("iInt: %d\n",Union.iInt);				/*�����Ա��������*/
	printf("cChar: %c\n",Union.cChar);
	return 0;
}
