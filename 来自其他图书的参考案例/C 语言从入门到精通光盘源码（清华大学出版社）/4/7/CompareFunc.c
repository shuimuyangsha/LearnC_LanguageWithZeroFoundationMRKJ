#include<stdio.h>

int main()
{
	int iChinese,iEnglish;			/*�������������������������*/
	printf("Enter Chinese score:");	/*��ʾ��Ϣ*/
	scanf("%d",&iChinese);			/*�������*/
	printf("Enter English score:");	/*��ʾ��Ϣ*/
	scanf("%d",&iEnglish);			/*�������*/
	

	if(iChinese>iEnglish)		/*ʹ�ù�ϵ���ʽ�����ж�*/
	{
		printf("Chinese is better than English\n");
	}
	if(iChinese<iEnglish)		/*ʹ�ù�ϵ���ʽ�����ж�*/
	{
		printf("English is better than Chinese\n");
	}
	if(iChinese==iEnglish)		/*ʹ�ù�ϵ���ʽ�����ж�*/
	{
		printf("Chinese equal English\n");
	}

	return 0;
}

