#include<stdio.h>

void Max(int iNum1,int iNum2);

int main()
{
	int iNum1, iNum2;
	printf("����������Ҫ�Ƚϵ�����\n");
	printf("��һ�����ǣ�");
	scanf("%d",&iNum1);
	printf("�ڶ�������:");
	scanf("%d",&iNum2);
	
	Max(iNum1,iNum2);
	return 0;
}

void Max(int iNum1,int iNum2)
{
	int iTemp;
	iTemp=iNum1>iNum2?iNum1:iNum2;

	printf("�������ǣ�%d\n",iTemp);
}