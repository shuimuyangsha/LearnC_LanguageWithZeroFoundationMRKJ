#include<stdio.h>                           /*����ͷ�ļ�*/

/*�����������������м���*/
void TwoNum(float iNum1, float iNum2);

int main()
{
	TwoNum(5,10);/*���ú���*/
	return 0;				                /*�������*/
}

void TwoNum(float iNum1, float iNum2)	/*���庯��*/
{
	float iTempResult;		                /*�������ͱ���*/
	iTempResult=iNum1/iNum2;                /*���м��㣬���������ֵ��iTempResult*/
    printf("����ֵ��%f\n",iTempResult);     /*��ʾ�������ֵ*/	
}