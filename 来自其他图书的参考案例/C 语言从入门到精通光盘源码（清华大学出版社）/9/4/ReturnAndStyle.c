#include<stdio.h>

char ShowChar();					/*����������*/

int main()
{
	char cResult;
	cResult=ShowChar();				/*����9-4�ļ������㣬���������ֵ������iResult*/
	printf("%c\n",cResult);
	return 0;						/*�������*/
}

char ShowChar()
{
	int iNumber;						/*�������ͱ���*/
	printf("please input a number:\n");	/*�����ʾ��Ϣ*/
	scanf("%d",&iNumber);				/*����һ�����ͱ���*/
	return iNumber;						/*���ص�������*/
}