#include<stdio.h>						/*����ͷ�ļ�*/
#define Height 10						/*���峣��*/

int calculate(int Long, int Width);		/*��������*/

int main()								/*������main*/
{
	int m_Long;							/*�������ͱ�������ʾ����*/
	int m_Width;						/*�������ͱ�������ʾ���*/
	int result;							/*�������ͱ�������ʾ����������*/


	printf("������ĸ߶�Ϊ��%d\n",Height);/*��ʾ��ʾ*/
	
	printf("�����볤��\n");				/*��ʾ��ʾ*/
	scanf("%d",&m_Long);				/*���볤����ĳ���*/

	printf("��������\n");				/*��ʾ��ʾ*/
	scanf("%d",&m_Width);				/*���볤����Ŀ��*/

	result=calculate(m_Long,m_Width);	/*���ú������������*/
	printf("�����������ǣ�");			/*��ʾ��ʾ*/
	printf("%d\n",result);				/*��������С*/
	return 0;							/*��������0*/
}

int calculate(int Long, int Width)		/*��������������*/
{
	int result =Long*Width*Height;		/*����������*/
	return result;						/*�����������������*/
}
