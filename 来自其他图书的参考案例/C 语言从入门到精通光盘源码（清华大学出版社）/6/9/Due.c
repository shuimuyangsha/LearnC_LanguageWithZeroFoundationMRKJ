#include<stdio.h>

int main()
{
	float fDues;	/*���������ʾǷ����*/
	float fAmount;	/*��ʾҪ������Ƿ����*/
	int iOntime;	/*��ʾ�Ƿ�ʱ�黹*/
	char cChar;		/*���������û�������ַ�*/

	
	printf("Enter dues amount:\n");	/*��ʾ��Ϣ����ʾ����Ƿ����*/
	scanf("%f",&fDues);				/*�û�����*/
	printf("On Time? (y/n)\n");		/*��ʾ��Ϣ����ʾ�����Ƿ�ʱ����*/
	getchar();						/*�õ��س��ַ�*/
	cChar=getchar();				/*�õ�������ַ�*/
	iOntime=(cChar=='y')?1:0;		/*ʹ����������������ַ�ѡ�����ѡ�����*/
	fAmount=iOntime?fDues:(fDues*1.1);	/*ʹ���������������iOntimeֵ����ٽ���ѡ�����*/
	printf("the Amount is:%.2f\n",fAmount);/*�������Ӧ������Ƿ�������*/
	return 0;
}