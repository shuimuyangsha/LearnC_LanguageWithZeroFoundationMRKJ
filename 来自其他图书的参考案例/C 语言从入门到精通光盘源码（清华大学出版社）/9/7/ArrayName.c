#include<stdio.h>

void  Evaluate(int iArrayName[10]);		/*������ֵ����*/
void  Display(int iArrayName[10]);		/*������ʾ����*/

int main()
{
	int iArray[10];		/*����һ������10��Ԫ�ص���������*/

	Evaluate(iArray);	/*���ú������и�ֵ����������������Ϊ����*/
	Display(iArray);	/*���ú������и�ֵ����������������Ϊ����*/
	return 0;
}
/*///////////////////////////////////////////////////////////*/
/*						����Ԫ�ص���ʾ						*/
/*///////////////////////////////////////////////////////////*/
void  Display(int iArrayName[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("the member number is %d\n",iArrayName[i]);
	}
}
/*///////////////////////////////////////////////////////////*/
/*						��������Ԫ�صĸ�ֵ					*/
/*///////////////////////////////////////////////////////////*/
void  Evaluate(int iArrayName[10])
{
	int i;
	for(i=0;i<10;i++)
	{
		iArrayName[i]=i;
	}
}