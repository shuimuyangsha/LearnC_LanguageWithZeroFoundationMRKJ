#include<stdio.h>
#include<string.h>

int main()
{
	char user[20]     = {"mrsoft"};
	char password[20] = {"mrkj"};
	char ustr[20],pwstr[20];
	int i=0;

	while(i < 3)
	{
		printf("�����û����ַ���:\n");
		gets(ustr); 										/*�����û����ַ���*/
		printf("���������ַ���:\n");
		gets(pwstr); 										/*���������ַ���*/
		if(strcmp(user,ustr))								/*����û����ַ��������*/
		{
			printf("�û����ַ����������\n");					/*��ʾ�û����ַ����������*/
		}
		else												/*�û����ַ������*/
		{
			if(strcmp(password,pwstr))						/*��������ַ��������*/
			{
				printf("�����ַ����������\n");			/*��ʾ�����ַ����������*/
			}
			else											/*�û����������ַ�������ȷ*/
			{
				printf("��ӭʹ�ã�\n");						/*�����ӭ�ַ���*/
				break;
			}
		}
		i++;
	}
	if(i == 3)
	{
		printf("�����ַ�������3�Σ�\n");					/*�����ַ�������3��*/
	}

	return 0;												/*�������*/
}

