#include<stdio.h>

int Function();			/*��������*/

int main()
{
	printf("this step is before the Function\n");	/*�����ʾ��Ϣ*/
	Function();		/*���ú���*/
	printf("this step is end of the Function\n");	/*�����ʾ��Ϣ*/
	return 0;
}

int Function()		/*���庯��*/
{
	printf("this step is in the function\n");		/*�����ʾ��Ϣ*/
	/*��������*/
}