#include <stdio.h>

int main()
{
	int i;
	char String[7]  = {"mrsoft"};
	char Reverse[7] = {0};
	int size;
	size = sizeof(String);	/*����Դ�ַ�������*/

	/*ѭ����ȡ�ַ�*/
	for(i=0;i<6;i++)
	{
		Reverse[size-i-2] = String[i];	/*��Ŀ���ַ����в����ַ�*/
	}

	/*���Դ�ַ���*/
	printf("���Դ�ַ�����%s\n",String);
	/*���Ŀ���ַ���*/
	printf("���Ŀ���ַ�����%s\n",Reverse);

	return 0;						/*�������*/
}

