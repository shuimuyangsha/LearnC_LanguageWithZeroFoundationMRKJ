#include<stdio.h>

static char* GetString(char* pString)			/*���帳ֵ����*/
{
	return pString;								/*�����ַ�*/
}

static void ShowString(char* pString)			/*�����������*/
{
	printf("%s\n",pString);						/*��ʾ�ַ���*/
}

int main()
{
	char* pMyString;							/*�����ַ�������*/

	pMyString=GetString("Hello!");				/*���ú���Ϊ�ַ�����ֵ*/
	ShowString(pMyString);						/*��ʾ�ַ���*/

	return 0;
}

