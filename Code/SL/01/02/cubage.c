#include<stdio.h>						/*����ͷ�ļ�*/
#define HEG 0.54						/*���峣��*/

float height(float father, float mother);		/*��������*/

int main()								/*������main*/
{
	float father;							/*���帡���ͱ�������ʾ�������*/
	float mother;						/*���帡���ͱ�������ʾĸ�����*/
	float son;							/*���帡���ͱ�������ʾ�������*/
	
	printf("�����븸�׵���ߣ�\n");				/*��ʾ��ʾ*/
	scanf("%f",&father);				/*���븸�����*/

	printf("������ĸ����ߣ�\n");				/*��ʾ��ʾ*/
	scanf("%f",&mother);				/*����ĸ�����*/

	son=height(father,mother);	/*���ú���������������*/
	printf("Ԥ�������ߣ�");			/*��ʾ��ʾ*/
	printf("%.2f\n",son);				/*����������*/
	return 0;							/*��������0*/
}

float height(float father, float mother)		/*������������ߺ���*/
{
	float son =(father+mother)*HEG;		/*�������������*/
	return son;						/*�����������߽������*/
}
