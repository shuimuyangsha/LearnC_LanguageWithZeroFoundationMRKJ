#include<stdio.h>
#include<string.h>

int main()
{
	char password[20] = {"574824"};
	char pwstr[20];
	int i=0;

	while(i < 3)
    {									 
		printf("���������ַ���:\n");
		gets(pwstr); 										/*���������ַ���*/
			if(strcmp(password,pwstr))						/*��������ַ��������*/
			{
				printf("�����ַ����������\n");			/*��ʾ�����ַ����������*/
			}
			else											/*�����ַ�������ȷ*/
			{
				printf("������ȷ����ѡ�����\n");			/*����ַ���*/
				break;
			}
		
		i++;
	}
	if(i == 3)
	{
		printf("�����ַ�������3�Σ��뵽�˹����������\n");	/*�����ַ�������3��*/
	}

	return 0;												/*�������*/
}

