#include<stdio.h>

void DrinkMilk(char* cBottle);			/*��������*/

int main()
{
	char cPoke[]="";						/*�����ַ��������*/
	printf("Mother wanna give the baby:");	/*�����Ϣ��ʾ*/
	scanf("%s",&cPoke);
	DrinkMilk(cPoke);			/*��ʵ�ʲ������ݸ���ʽ����*/
	return 0;					/*�������*/
}

/*��ţ�̵Ķ���*/
void DrinkMilk(char* cBottle)			/*cBottleΪ��ʽ����*/
{
	printf("The Baby drink the %s\n",cBottle);/*�����ʾ�����к�ţ�̶���*/
}