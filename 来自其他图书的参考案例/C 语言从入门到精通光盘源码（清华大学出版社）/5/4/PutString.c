#include<stdio.h>

int main()
{
	char* Char="ILOVECHINA";	/*�����ַ���ָ�����*/

	puts("ILOVECHINA!");		/*����ַ�������*/
	puts("I\0LOVE\0CHINA!");	/*����ַ������������м��������'\0'*/
	puts(Char);					/*����ַ���������ֵ*/
	Char="ILOVE\0CHINA!";		/*�ı��ַ���������ֵ*/
	puts(Char);					/*����ַ���������ֵ*/
	return 0;					/*�������*/
}