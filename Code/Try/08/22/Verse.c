#include <stdio.h>

int main()
{
	int i;
	char String[19]  = {"Believe in youself"};
	char Reverse[19] = {0};
	int size;
	size = sizeof(String);	/*����Դ�ַ�������*/

	/*ѭ����ȡ�ַ�*/
	for(i=0;i<18;i++)
	{
		Reverse[size-i-2] = String[i];	/*��Ŀ���ַ����в����ַ�*/
	}

	/*���Դ�ַ���*/
	printf("���Դ�ַ�����%s\n",String);
	/*���Ŀ���ַ���*/
	printf("���Ŀ���ַ�����%s\n",Reverse);

	return 0;						/*�������*/
}

