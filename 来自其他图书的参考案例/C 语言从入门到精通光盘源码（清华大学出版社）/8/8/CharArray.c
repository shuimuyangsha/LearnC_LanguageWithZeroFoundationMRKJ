#include<stdio.h>

int main()
{
	//char cArray[5]={'H','e','l','l','o'};	/*��ʼ���ַ�����*/
	char cArray[5]="Hello";
	int i;						/*ѭ�����Ʊ���*/
	for(i=0;i<5;i++)			/*����ѭ��*/
	{
		printf("%c",cArray[i]);	/*����ַ�����Ԫ��*/
	}
	printf("\n");				/*�������*/
	return 0;
}