#include <stdio.h>
#include <time.h>

int main()
{
	int command[4] = {0,1,2,3};			            /*����һ������*/
	int num;
	struct tm *sysTime;
	printf("�����������������0��\n");				/*����ַ���*/
	printf("�������������\n");						/*����ַ���*/

	while (1)
	{
		scanf("%d", &num);							/*�����������*/
		/*�ж�����������ַ�*/
		if (command[0] == num)						/*�����������0	*/				
		{
			/*���������Ϣ*/
			printf("��������1��ʾϵͳ����, ��������2��ʾϵͳʱ��, �����ĸ3�˳�ϵͳ!\n");
		}
		else if (command[1] == num)					/*�������������1*/
		{
			time_t nowTime;
			time(&nowTime);							/*��ȡϵͳ����*/
			sysTime= localtime(&nowTime);			/*ת��Ϊϵͳ����*/
			printf("ϵͳ���ڣ�%d-%d-%d \n",1900 + sysTime->tm_year,sysTime->tm_mon + 1
					,sysTime->tm_mday);				/*�����Ϣ*/
		}
		else if (command[2] == num)					//�������������2*/
		{
			time_t nowTime;
			time(&nowTime);							/*��ȡϵͳʱ��*/
			sysTime = localtime(&nowTime);			/*ת��Ϊϵͳʱ��*/
			printf("ϵͳʱ�䣺%d:%d:%d \n",sysTime->tm_hour ,sysTime->tm_min 
					,sysTime->tm_sec);				/*�����Ϣ*/
		}
		else if (command[3] == num)
		{
			return 0;								/*�˳�ϵͳ*/
		}
		printf("�������������\n");					/*����ַ���*/
	}

	return 0;										/*�������*/
}

