#include<stdio.h>
#include<ctype.h>

void SwitchShow(char c);

int main()
{
	char cCharPut;		/*�����ַ���������������������ַ�*/
	char cCharTemp;		/*�����ַ��������������ջس���*/


	printf("First enter:");			/*��Ϣ��ʾ����һ�������ַ�*/
	scanf( "%c", &cCharPut);		/*�����ַ�*/			
	SwitchShow(cCharPut);			/*���ú��������ж�*/
	cCharTemp=getchar();			/*���ջس�*/


	printf("Second enter:");		/*��Ϣ��ʾ�����еڶ��������ַ�*/
	scanf( "%c", &cCharPut);		/*�����ַ�*/
	SwitchShow(cCharPut);			/*���ú����ж�������ַ�*/
	cCharTemp=getchar();			/*���ջس� */

	printf("Third enter:");			/*��Ϣ��ʾ�����е����������ַ�*/
	scanf( "%c", &cCharPut);		/*�����ַ�*/
	SwitchShow(cCharPut);			/*���ú����ж�������ַ�*/

	return 0;						/*�������*/
}

void SwitchShow(char cChar)
{
	if(isalpha(cChar))			/*�ж��Ƿ�����ĸ*/
	{
		printf("You entered a letter of the alphabet %c\n",cChar);
	}

	if(isdigit(cChar))			/*�ж��Ƿ�������*/
	{
		printf("You entered the digit %c\n", cChar);
	}
	
	if(isalnum(cChar))			/*�ж��Ƿ�����ĸ����������*/
	{
		printf("You entered the alphanumeric character %c\n", cChar);
	}

	else						/*���ַ��Ȳ�����ĸҲ��������ʱ*/
	{
		printf("You entered the character is not alphabet or digit :%c\n", cChar);
	}
}

