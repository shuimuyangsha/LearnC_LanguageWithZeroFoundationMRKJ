#include<stdio.h>

extern char* GetString(char* pString);			/*�����ⲿ����*/
extern void ShowString(char* pString);			/*�����ⲿ����*/

int main()
{
	char* pMyString;							/*�����ַ�������*/
	pMyString=GetString("���Ǳ����ڱ��˸ı�֮ǰ�ı��Լ�");				/*���ú���Ϊ�ַ�����ֵ*/
	ShowString(pMyString);						/*��ʾ�ַ���*/

	return 0;
}

extern void ShowString(char* pString)
{
	printf("%s\n",pString);					/*��ʾ�ַ���*/
}
extern char* GetString(char* pString)
{
	return pString;							/*�����ַ�*/
}