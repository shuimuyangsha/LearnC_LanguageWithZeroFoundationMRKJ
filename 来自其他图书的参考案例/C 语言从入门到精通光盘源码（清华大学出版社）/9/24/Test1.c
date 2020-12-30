#include<stdio.h>

void Max(int iNum1,int iNum2);

int main()
{
	int iNum1, iNum2;
	printf("请输入两个要比较的数：\n");
	printf("第一个数是：");
	scanf("%d",&iNum1);
	printf("第二个数是:");
	scanf("%d",&iNum2);
	
	Max(iNum1,iNum2);
	return 0;
}

void Max(int iNum1,int iNum2)
{
	int iTemp;
	iTemp=iNum1>iNum2?iNum1:iNum2;

	printf("最大的数是：%d\n",iTemp);
}