#include<stdio.h>

int main()
{
	char cChar1;		/*��������*/
	cChar1=getchar();	/*�������豸�õ��ַ�*/
	putchar(cChar1);	/*����ַ�*/
	putchar('\n');		/*���ת���ַ�����*/
    getchar();			/*�õ��س��ַ�*/
	putchar(getchar());	/*�õ������ַ���ֱ�����*/
	putchar('\n');		/*����*/
	return 0;			/*�������*/
}