#include<stdio.h>

enum Color{Red=1,Blue,Green} color;/*����ö�ٱ���������ʼ��*/
int main()
{
	int icolor;			/*�������ͱ���*/
	scanf("%d",&icolor);	/*��������*/
	switch(icolor)		/*�ж�icolorֵ*/
	{
	case Red:		/*ö�ٳ�����Red��ʾ1*/
		printf("the choice is Red\n");
		break;
	case Blue:		/*ö�ٳ�����Blue��ʾ2*/
		printf("the choice is Blue\n");
		break;
	case Green:		/*ö�ٳ�����Green��ʾ3*/
		printf("the choice is Green\n");
		break;
	default:
		printf("???\n");
		break;
	}
	return 0;
}